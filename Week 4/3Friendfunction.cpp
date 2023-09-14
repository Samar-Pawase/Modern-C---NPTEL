#include <iostream>
using namespace std;
class MyClass{
    int data_;
    public:
    MyClass (int i): data_(i){}
    friend void display(const MyClass &a); //This allows global function display to access private members of this class
};

void display(const MyClass& a){
    cout << "data = " << a.data_;
}

int main(){
    MyClass a(5);
    display(a);
    return 0;
}