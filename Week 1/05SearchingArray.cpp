#include <iostream>
#include <algorithm>
using namespace std;
void binarySearch(int arr[],int n,int k){
    int s = 0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if (arr[mid]==k){
            cout<<"Element "<<k<<" found at index "<<mid<<".";
            return;
        }else if(arr[mid]>k){
            e = mid-1;
        }else if(arr[mid]<k){
            s = mid +1;
        }else{
            cout<<"Element "<<k<<" not found in the array";
            return;
        }
    }
}

int main(){
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter element to be found ";
    cin>>k;

    // Default Binary search function from algorithm
    // if(binary_search(arr,arr+n,k)){
    //     cout<<"Found";
    // }else{
    //     cout<<"Not found";
    // }

    // User codded binary search function
    binarySearch(arr,n,k);
return 0;
}