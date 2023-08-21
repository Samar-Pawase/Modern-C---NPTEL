#include <iostream>
using namespace std;
class Employee{
    private:
        string name;
        string address;
        double sal_fixed = 100000;
        double sal_variable = 200;
    public:
        string get_name() { return name; }
        void set_name(string name) { this->name = name; }
        void set_addr(string address) { this->address = address; }
        double get_sal_fixed() { return sal_fixed; }
        double salary() { return sal_fixed + sal_variable; }
        // sal_variable is not visible in the code but is a defined private variable of the class
};

int main(){
        Employee e1;
        e1.set_name("Samar");
        e1.set_addr("Ishan Nagari");
        cout << "Name - " << e1.get_name() << " - " << e1.get_sal_fixed() << " " << e1.salary();
        return 0;
}