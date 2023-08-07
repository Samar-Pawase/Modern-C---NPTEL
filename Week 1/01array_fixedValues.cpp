// Declaring array using fixed values
#include <iostream>
#include <vector>
using namespace std;
#define MAX 100 // Defining MAX a constant having value 100
int main(){
    vector<int> arr(MAX);
    cout<<"Enter number of elements for the array";
    int count,sum=0;
    cin>>count;
    for (int i = 0; i<count; i++){
        arr[i] = i;
        sum = sum+arr[i];
    }
    cout<<sum;
return 0;
}