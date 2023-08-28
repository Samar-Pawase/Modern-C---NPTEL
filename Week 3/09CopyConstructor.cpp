#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    private:
        double re_, img_;
    public:
        Complex(double re, double img) : re_(re), img_(img){
            cout << "Complex ctor: ";
            print();
            cout << endl;
        }
        Complex (const Complex &c):re_(c.re_), img_(c.img_){
            cout << "Complex Copy ctor: ";
            print();
            cout << endl;
        }
        ~Complex(){
            cout << "Complex dtor: ";   
            cout << endl;
        }
        double norm(){
            return sqrt(re_ * re_ + img_ * img_);
        }
    void print(){
        cout << "|" << re_ << "+" << img_ << "i| = "<<norm();
            cout << endl;
    }
};

int main(){
    Complex c(3, 4); //Complex invoked
    Complex c2 = c; //Complex Copy invoked as Complex type member is sent to it
    return 0;
}