#include <iostream>
using namespace std;

class Complex{
    double re, im;
    public:
        Complex(double a = 0,double b =0):re(a),im(b){}
        ~Complex(){}
        void display();

        Complex operator+(const Complex&t){
            Complex r;
            r.re = re + t.re;
            r.im = im + t.im;
            return r;
        }
};

void Complex::display(){
        cout << re << "+" << im << "j" << endl;
}

int main(){
        Complex c1(2, 4.5), c2(5, 2.43);
        Complex c3 = c1 + c2;
        c3.display();
        return 0;
}