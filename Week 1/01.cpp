// Declaring array of some size using manifest constant rather than using hard codded values

#include<bits/stdc++.h>
using namespace std;
#include <vector>
#define MAX 100 // This defines that MAX has the value 100

int main(){
    vector<int> arr(MAX); // This helps in declaring a 1d vector for an array of size MAX, Changing the value of MAX will change the size of array
    for (int i = 0; i < 20;i++){
        cin >> arr[i];
    }
    return 0;
}