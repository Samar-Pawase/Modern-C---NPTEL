// Data Structure Stack
// REversing a string in Stack

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main(){ 
    char str[10] = "ABCDEF";
    stack<char> s;
    for(int i =0;i<strlen(str);i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
return 0;
}