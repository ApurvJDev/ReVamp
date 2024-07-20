### In selection sort we push the minimum element to the sorted part of the array
### Then we look for the next minimum element in the unsorted part of the array
### By default the first element of the unsorted part is considered to be the minimum

![2888f5b](https://github.com/user-attachments/assets/a8f3f3d5-f6f0-489f-96bd-94e9e3097d28)

##

-
- void selectionSort(int arr[], int n)
-    {
-       int start, minVal, minIndex, temp;
       
       for(int start = 0; start < n; start++) {
           
           minVal = arr[start];
           
           for(int i = start + 1; i < n; i++) {
               
               if(arr[i] < minVal) {
                   
                   minVal = arr[i];
                   
                   minIndex = i;
               }
           }
           //swapping of start and minVal
           temp = arr[start];
           arr[start] = minVal;
           arr[minIndex] = temp;
       }
    }
