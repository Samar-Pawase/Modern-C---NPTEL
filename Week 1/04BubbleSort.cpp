#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[],int n){
    for (int i =0;i<n-1;i++){
        for (int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// compare function for C++std lib sort for sorting in decending order
bool compare(int i,int j){
    return (i>j);
}

int main(){
    cout<<"Enter numnber of elements ";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    } 

    bubbleSort(arr,n); //Bubble sort with user function
    sort(arr,arr+n,compare); //Sorts in Decending order
    sort(arr,arr+n); //Sorts in Ascending order

    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}