#include <iostream>
using namespace std;
int main(){
    int a;
    a = 10;
    int& b = a; // b is referenced to a
    // a and b have the same memory location they are just accessed by different variable names
    ++a;
    cout<<"a = "<<a<<"b = "<<b;
    // changing either a or b changes value of both
return 0;
}