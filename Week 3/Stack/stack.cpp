#include "stack.h"
Stack::Stack():data_(new char[100]),top_(-1){ }
Stack::~Stack() { delete[] data_; }
int Stack::empty() { return top_ == -1; }
void Stack::push(char x) { data_[++top_] = x; }
char Stack::top() { return data_[top_]; }
void Stack::pop() { --top_; }

// THIS IS AN IMPLEMENTATION FILE