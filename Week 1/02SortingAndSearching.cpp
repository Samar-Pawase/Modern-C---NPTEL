#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int i, int j){
  return (i > j);
}

void bubbleSort(int arr[], int n){
  for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n - i - 1; j++){
      if (arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
} // Swap two adjecent elements n-1 times if they are in wrong order.

int binarySearch(int arr[], int n, int k){
  int s = 0;
  int e = n;
  while(s<=e){
    int mid = (s + e) / 2;
    if(arr[mid] == k){
      return mid+1;
    }else if(arr[mid]>k){
      e = mid - 1;
    }else{
      s = mid + 1;
    }
  }
  return -1;
} //Binary search needs the array in sorted order

void printArr(int arr[],int n){
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[8] = {2, 3, 1, 3, 55, 63, 124, 64};
  
  // Sorting with the help of sort function in header file <algorithm>
  // Arguments required for the sort function - 
  // array, array size in the form of "arr+n"
  // compare function (function needs to be user defined)
  cout << "Array - ";
  printArr(arr, 8);
  cout << endl;

  cout << "Sorting with sort() function - decending order(default)" << endl;
  sort(arr, arr + 8, compare); //Adding compare function sorts in deccending order
  printArr(arr,8);
  cout << endl;

  cout << "Sorting with sort() function - accending order" << endl;
  sort(arr, arr + 8); // Not adding compare functions sorts in accending order
  printArr(arr,8);
  cout << endl;

  // Bubble sort
  cout << "Bubble Sort" << endl;
  bubbleSort(arr, 8);
  printArr(arr, 8);
  cout << endl;

  //Binary search
  cout << "Binary search with code ";
  int k;
  cout << "Enter element to search - ";
  cin >> k;
  // Sorting the array first for binary search
  sort(arr, arr + 8);
  cout << binarySearch(arr, 8, k);
  cout << endl
       << endl;

  cout << "Binary search with in-built function ";
  int k;
  cout << "Enter element to search - ";
  cin >> k;
  // Sorting the array first for binary search
  sort(arr, arr + 8);
  binary_search(arr, arr + 8, k);
  cout << endl
       << endl;
  return 0;
}