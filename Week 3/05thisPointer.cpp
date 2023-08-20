#include <iostream>
using namespace std;
class X{public:
    int n, m;
    void f(int a, int b){
        n = a;
        this->m = b;
        cout << "ID - " << this<<endl;
    }
};

int main(){
    X a;
    a.f(2, 3);
    cout <<"Address - "<< &a << endl; //Both ID and Address will be same
    return 0;
}