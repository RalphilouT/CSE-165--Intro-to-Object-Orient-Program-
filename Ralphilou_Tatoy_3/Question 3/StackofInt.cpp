#include "StackOfInt.h"
void StackOfInt::pushINT(int val) {
    stack.pushIMP(val);
}
void StackOfInt::displayINT() {
    stack.displayIMP();
}

int StackOfInt::showINT() {
    return stack.showIMP();
}
int StackOfInt::popINT() {
    return stack.popIMP();
}
bool StackOfInt::isemptyINT() {
    return stack.emptyIMP();
}