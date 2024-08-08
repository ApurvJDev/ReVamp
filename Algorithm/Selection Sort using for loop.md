### In selection sort we push the minimum element to the sorted part of the array
### Then we look for the next minimum element in the unsorted part of the array
### By default the first element of the unsorted part is considered to be the minimum

![2888f5b](https://github.com/user-attachments/assets/a8f3f3d5-f6f0-489f-96bd-94e9e3097d28)

##

-
- #include <bits/stdc++.h> 
- void selectionSort(vector<int>& arr, int n)
- {   
-     for(int i = 0; i < n; i++) {
        int smallest = arr[i];
        int sI = i;//if below condition fails sI will never be initialized
        //comparison
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < smallest) {
                smallest = arr[j];//store the val of smallest num
                sI = j;//store the position of the smallest index
            }
        }
        // swapping
        int temp = arr[i];
        arr[i] = smallest;
        arr[sI] = temp;
    }
}
