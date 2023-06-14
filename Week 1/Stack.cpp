#include<iostream>
#include<stack>
#include<cstring>

using namespace std;


int main()
{
  char str[10] = "ABCDEF";
  stack<char> s;

  // To reverse string - First push the elements into the stack
  // till the stack becomes empty get top element and pop it.
  for (int i = 0; i < strlen(str);i++){
    s.push(str[i]);
  }
  while  (!(s.empty())){
    cout << s.top();
    s.pop();
  }
  return 0;
}