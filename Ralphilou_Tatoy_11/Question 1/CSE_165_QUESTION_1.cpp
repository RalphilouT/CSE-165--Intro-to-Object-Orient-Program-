#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <list>
#include <iterator>
#include <memory>
//using namespace std;
template<typename SLL>
class SList{
    struct Node{
        SLL data;
        std::shared_ptr<Node> next;
		Node(const SLL&x = 0):data(x),next(NULL){}
		~Node(){};
    };
    std::shared_ptr<Node> listOFFRONT;
    public:
		SList():listOFFRONT(NULL){}
		~SList(){
			while(listOFFRONT)
			{
				erase();
			}
		}
		class iterator;
		friend class iterator;
		class iterator:public std::iterator<std::forward_iterator_tag,SLL, ptrdiff_t>{
			std::shared_ptr<Node> iterating;
			public:
				iterator():iterating(NULL){}
				iterator(std::shared_ptr<Node> ptr):iterating(ptr){}
                bool operator==(const iterator&other) const {
					return iterating == other.iterating;
				}
				bool operator!=(const iterator&other) const {
					return !operator==(other);
				}
				SLL operator*() const{
					if(iterating)
					{
						return iterating->data;
					}
					return SLL();
				}
				iterator& operator++(){
					if(iterating)
					{
						iterating = iterating->next;
					}
					return *this;
				}
				iterator operator++(int){
					iterator temp = *this;
					++*this;
					return temp;
				}
				iterator insert(const SLL& var)
				{
					std::shared_ptr<Node> temp = iterating;
					iterating = std::make_shared<Node>(var);
					iterating->next = temp->next;
					temp->next = iterating;
					return iterator(iterating);
				}
				
		};
		
		
		iterator begin()const{
			return iterator(listOFFRONT);
		}
		iterator end()const{
			return iterator(NULL);
		}
		void insert(const SLL& var) {
    	    auto node = std::make_shared<Node>(var);

    		if (listOFFRONT) {

        		auto tempPTR = listOFFRONT;

        		while (tempPTR->next != NULL)
        			tempPTR = tempPTR->next;

        		tempPTR->next = node;

    		} else
    			listOFFRONT = node;
        }
		void erase()
		{
			if(listOFFRONT->next == NULL)
			{
				listOFFRONT.reset();
				return;
			}
			auto ptr1 = listOFFRONT;
			auto ptr2 = listOFFRONT->next;
			while(ptr2->next != NULL)
			{
				ptr1 = ptr2;
				ptr2 = ptr2->next;
			}
			ptr1->next = NULL;
			ptr2.reset();
		}
	
        
};
int main(int argc,char **argv){
    SList<int> strlist;
	strlist.insert(1);
	strlist.insert(2);
	strlist.insert(3);
	strlist.insert(4);
	strlist.insert(5);
	//First position;
	auto it1 = strlist.begin();
	//iterating to index to modify the next pointer
	//Second Position
	it1++;
	//Modify the "next" pointer to the value 10
	it1.insert(10);
	strlist.insert(100);
	it1 = strlist.begin();
	for(int i = 0; i<7;i++)
	{
		std::cout << *it1 << "\n";
		it1++;
	}

	
}


