#include <iostream>
using namespace std;
class Complex{
    private:
        double re, im;
    public:
        Complex(double a = 0.0, double b = 0.0) : re(a), im(b){} //Constructor
        ~Complex(){} //Detructor
        void display();
        double real() { return re; }
        double img() { return im; }
        void set_re(double r) { re = r; }
        void set_img(double i) { im = i; }
};

void Complex::display(){
    cout << re << "+" << im << "j"<<endl;
}

// Operator overloading outside the class
Complex operator+(Complex&t1,Complex&t2){
    Complex sum;
    sum.set_re(t1.real() + t2.real());
    sum.set_img(t1.img() + t2.img());
    return sum;
}

int main(){
    Complex t1(3, 4.5);
    Complex t2(2, 5.5);
    Complex t3;
    t3 = t1 + t2;
    t3.display();
    return 0;
}