#include <iostream>
using namespace std;
int main(){
    unsigned char buf[sizeof(int) * 3]; // Memory is allocated for 3 integers - byte buffer on stack (top)
    int *pInt = new (buf) int(3);
    int *qInt = new (buf+sizeof(int)) int(4); // Incrementing the memory blocks wrt 'buf'
    int *rInt = new (buf+sizeof(int)*2) int(6);
    // Assgined variables and initialized values to the memory blocks created.

    cout << "Value: " << *pInt << " Address: " << pInt<<endl;
    cout << "Value: " << *qInt << " Address: " << qInt<<endl; //Addresses differ by 4 bytes
    cout << "Value: " << *rInt << " Address: " << rInt<<endl;
    return 0;
}