#include <iostream>
using namespace std;
class Myclass{
    static int x; //Declared a static data member that will be shared by all the objects of the Mycalass
    public:
    void get() { x = 10; }
    void print() { x += 10;
        cout << x << endl;
    }
};

int Myclass ::x = 0; //Initializing x as a global variable outside main and class scope

int main(){
    Myclass obj1, obj2;
    obj1.get();
    obj1.print();
    obj2.print();
    return 0;
}

/*
OUTPUT -
20
30
REASON - obj1 and obj 2 do not have seperate x, both have same x as x is declared as a static variable and have been assigned value 0 in the global environment
*/