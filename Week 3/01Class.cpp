#include <iostream>
using namespace std;
class Complex{public:
    double re, im;
};

int main(){
    Complex c = {4.3, 5.6};
    cout << c.re << " " << c.im;
    return 0;
}