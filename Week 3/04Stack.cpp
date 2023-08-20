#include <iostream>
using namespace std;
class Stack{public:
    char data[100];
    int top_;
    char top(){
        return data[top_];
    }
    bool empty(){
        return (top_ == -1);
    }
    void push(char x){
        data[++top_] = x;
    }
    void pop(){
        --top_;
    }
};

int main(){
    Stack s;
    s.top_ = -1;
    char str[10] = "SAMAR";
    int i;
    for (i = 0; i < 5;++i){
        s.push(str[i]);
    }
        cout << "Reversed name  "<<endl;
        while(!s.empty()){
            cout<< s.top();
            s.pop();
        }
    return 0;
}