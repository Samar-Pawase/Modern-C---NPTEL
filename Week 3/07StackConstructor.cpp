#include <iostream>
using namespace std;
class Stack{
    private:
        char *data_;
        int top_;
    public:
        Stack() : data_(new char[10]), top_(-1) { cout << "Initialized"; }
};

int main(){
    char str[10] = "SAMAR";
    Stack s;
    return 0;
}