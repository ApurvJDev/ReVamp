

void bubbleSort(int arr[], int n) {
        
        int comparison = n - 1;
        
        for(int i = 0; i < n - 1; i++) {
            
            int j = 0, k = 1, temp;
            
            for(int c = 0; c < comparison; c++) {
                
                if(arr[j] > arr[k]) {
                    // swapping
                    temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;  
                }
                j += 1; // comparison of next to adjacent elements
                k += 1;
            }
            comparison -= 1;    // after each iteration max element will be last
        }
        
    }
