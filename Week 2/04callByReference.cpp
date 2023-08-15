#include <iostream>
using namespace std;

void Func_under_param_test(int &b,int c){ 
//This function takes an original variable with the help of referencing (int &b) and a value copy with int c 
    cout<<"b = "<<b<<" &b = "<<&b<<endl;
    cout<<"c = "<<c<<" &c = "<<&c<<endl;
}
int main(){
    int a = 10;
    cout<<"a = "<<a<<" &a = "<<&a<<endl;
    Func_under_param_test(a,a);
return 0;
}

// Output - 
// a and b have same address and value as they share same memory location
// c just shares same value and not the memory location

// NOTE -> return by reference is also possible int& Fun(paramenters){ }; will be used
