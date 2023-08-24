#include <iostream>
using namespace std;
class Stack{
    char *data;
    int top;
    public:
        Stack() : data(new char[10]), top(-1) { cout << "Constructor called"; } //Constructor
        ~Stack() { delete[] data;
            cout << endl << "Destructor called";
        } // Destructor
};

int main(){
        Stack s;
        return 0;
}