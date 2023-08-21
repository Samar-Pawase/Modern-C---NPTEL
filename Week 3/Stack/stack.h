class Stack{
    private:
        char *data_;
        int top_;
    public:
        Stack();
        ~Stack();
        void push(char s);
        char top();
        int empty();
        void pop();
};

// THIS IS AN INTERFACE FILE
