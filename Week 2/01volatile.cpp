#include <iostream>
using namespace std;
int main(){
    static int i;
    i = 0;
    while(i!=100);   //This is an infinite loop
    // Compiler optimization at runtime
    while(1);

    //Declaring with volatile
    static volatile int i;
    i = 0;
    while( i!=100); //Complier cannot optimise it at runtime as i is declared to be volatile
return 0;
}