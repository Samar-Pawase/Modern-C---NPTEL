// Defining macros as inline functions
#include <iostream>
using namespace std;
inline int SQUARE(int x) {return x*x;} //Declaring functions with inline
int main(){
    int a = 3, b;
    b = SQUARE(a);
    cout << b;
return 0;
}