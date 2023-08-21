#include <iostream>
using namespace std;
#include "stack.h"
int main(){
    Stack s;
    char str[10] = "SAMAR";
    for (int i = 0; i < 5;i++)
        s.push(str[i]);
    while (!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}