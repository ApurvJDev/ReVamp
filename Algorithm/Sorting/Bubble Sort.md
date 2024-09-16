## It finds the maximum element from the unsorted part of the array and places it at the last position
![1](https://github.com/user-attachments/assets/0508f9a4-aa4c-462c-8c63-fd8bf217ff18)

```
void bubbleSort(int arr[], int n) {
        
        for(int i = 0; i < n - 1; i++) {    // no. of steps
            
            for(int j = 0; j < n - i - 1; j++) {    // comparisons
                
                //swapping
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
```
