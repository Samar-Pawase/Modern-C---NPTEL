// Creating a function with default parameters

#include <iostream>
using namespace std;

int IdentityFunction(int a = 10){
    return(a);
}

int main(){
    int b = 2;
    cout<<"Function using default value "<<IdentityFunction()<<endl;
    cout<<"Function using given value "<<IdentityFunction(b)<<endl;
return 0;
}