#include <iostream>
using namespace std;
class Node;
class List{
    Node *head;
    Node *tail;
    public:
        List(Node *h = 0) : head(h), tail(h){}
        void display();
        void append(Node *p);
};

class Node{
    int info;
    Node *next;
    public:
        Node(int i) : info(i), next(0){}
        friend void List::display();
        friend void List::append(Node *);
        friend class List; // This denotes all the member functions that class List might have are friends. No need of individual declaration
};

void List::display(){
    Node *ptr = head;
    while(ptr){
        cout << ptr->info << endl;
        ptr = ptr->next;
    }
}

void List::append(Node *p){
    if (!head){
        head = tail = p;
    }else{
        tail->next = p;
        tail = tail->next;
    }
}

int main(){
    List l;
    Node n1(1), n2(2), n3(3);
    l.append(&n1);
    l.append(&n2);
    l.append(&n3);
    l.display();
    return 0;
}