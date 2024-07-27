### Takes and element and places it in correct position



#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i = 0; i < n; i++) {
        int j = i;

        while (arr[j] < arr[j - 1] && j > 0) { // arr[j - 1] > arr[j]
          // swapping
          int temp = arr[j];
          arr[j] = arr[j - 1];
          arr[j - 1] = temp;
          j -= 1;
        }
    }
}
