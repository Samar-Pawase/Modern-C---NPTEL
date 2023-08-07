// Allocating size of array dynamically
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr; //Declaring the array of size default
    cout<<"Enter the numner of elements ";
    int count,sum=0;
    cin>>count;
    arr.resize(count); //assigning the size of array at the runtime
    for (int i=0;i<arr.size();i++){
        arr[i] = i;
        sum+=arr[i];
    }cout<<sum;
return 0;
}