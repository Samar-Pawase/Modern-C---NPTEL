#include <iostream>
using namespace std;
int main(){
    int *p = new int(6);
    cout<<"The value at the address "<<p<< " is "<<*p<<" "<<endl;
    delete p;
    cout<<"'delete p'"<<endl;
    cout<<"The value at the address "<<p<< " is "<<*p<<" "<<endl;
return 0;
}