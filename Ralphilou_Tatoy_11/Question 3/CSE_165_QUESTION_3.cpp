#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <algorithm>
#include <initializer_list>
#include <stdexcept>
#include <iterator>
// using std::cin;
// using std::cout;
// using std::vector;
// using std::endl;
using namespace std;
const int row = 2;
const int column = 2;
template<typename T> class Matrix;

template<typename T>
ostream& operator<<(ostream&, const Matrix<T>&);
template<typename T>
Matrix<T> operator+(const Matrix<T>&, const Matrix<T>&);
template<typename T>
Matrix<T> operator*(const Matrix<T>&, const Matrix<T>&);
template<typename T>
Matrix<T> operator*(const Matrix<T>&, const vector<T>&);

template<class T>
class Matrix
{

    public:
        vector< vector<T> > numbers ;

        Matrix(): numbers(row, vector<T>(column)) {}
        void readMATRIX();
        
        friend Matrix operator+<>(const Matrix&, const Matrix&);

        friend Matrix operator*<>(const Matrix&, const Matrix&);
        friend ostream& operator<<<>(ostream&, const Matrix<T>&);
        friend Matrix operator*<>(const Matrix&, const vector<T>&);

};
template<class T>
Matrix<T> operator*(const Matrix<T>& a, const vector<T>&b)
{
    vector<T>output;
    Matrix<T> ret;
    
    for(int i = 0; i < row; i++)
    {
        ret.numbers[i][i] = 0;
        for(int j = 0; j< column;j++)
        {

            ret.numbers[i][i]  += a.numbers[i][j] * b[j];
            
            //cout << ret.numbers[i][i]  << endl;
        }
        output.push_back(ret.numbers[i][i]);
    }
    //ret = output;
    
    return ret;
}
template<class T>
void Matrix<T>::readMATRIX()
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin >> this->numbers[i][j];
        }
    }
    
}
template<class T>
ostream& operator<<(ostream& out, const Matrix<T>&m)
{
    //Matrix<T> ret;
    if(m.numbers[0][1]==0)
    {
        cout << m.numbers[0][0] << endl;
        cout << m.numbers[1][1] << endl;
    }
    else{
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
            {
                out<< m.numbers[i][j] <<" ";
            }
            out << endl;
        }
    }
    
}
template<class T>
Matrix<T> operator+(const Matrix<T>& a, const Matrix<T>& b)
{
    Matrix<T> ret;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            ret.numbers[i][j] = a.numbers[i][j] + b.numbers[i][j];
        }
    
    }
    return ret;
}

template<class T>
Matrix<T> operator*(const Matrix<T>& a, const Matrix<T>& b)
{
    Matrix<T> ret;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            ret.numbers[i][j] = 0;
            for(int k = 0; k < column; k++)
            {
                ret.numbers[i][j] += a.numbers[i][k] * b.numbers[k][j];
            }
        }
    }
    return ret;
}

int main()
{
    cout << "2 by 2 Matrix" << endl;
    cout << "Input indexes and press enter" << endl;
    Matrix<int> a,b,c; //we can also declare matrices of type int,float,double etc.
    cout<<"Enter Matrix a:"<<endl;
    a.readMATRIX();
    cout << "Matrix a: " << endl << a;
    cout<<"Enter Matrix b:"<<endl;
    b.readMATRIX();
    cout << "Matrix b: " << endl << b;
    c = a + b;
    cout << "Matrix a+b: " << endl << c;
    c = a*b;
    cout << "Matrix a*b: " << endl << c;
    vector<int> in = {1,2};
    cout << "Vector in: " << endl;
    for(int i = 0;i<2;i++)
    {
        cout << in[i] << endl;
    }
    c = a*in;
   cout << "Matrix a*in: " << endl << c;
    
    return 0;
}

