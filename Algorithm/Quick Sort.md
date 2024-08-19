### 1) Pick a pivot and place it in it's correct position

### 2) Smaller elements will be placed on the left and bigger elements will be placed on the right of the pivot.


```

 int partition(vector<int>& arr, int low, int high) {
   int pivot = arr[low];
    int i = low;
    int j = high;

    while( i < j) {
        // find the first element from the left gr8er than pivot
        while(arr[i] <= pivot && i <= high ) {
            i++;
        }
        // find the first element from the right smaller than pivot
        while(arr[j] > pivot && j >= low ) {
            j--;
        }
        // swapping
        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
     return j;
}
void qs(vector<int>& arr, int low, int high) {

    if(low < high) {
        int pi = partition(arr, low, high);
        qs(arr, low, pi - 1);
        qs(arr, pi + 1, high);
    }
}

 vector<int> quickSort(vector<int> arr)
 {
     qs(arr, 0, arr.size() - 1);
     return arr;
 }

```
