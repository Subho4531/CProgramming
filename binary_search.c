#include <stdio.h>

int binarysearch(int arr[],  int size,int target){
    if (size <= 0) {
        return -1; // Return -1 for invalid size
        }
        return -1; // Target not found
    }
    int st = 0, end = size - 1;
    while(st <= end){
        int mid = (st + end) / 2; // Declare and initialize mid
        if(target < arr[mid]){
            end = mid - 1; // Update end to narrow the search range
        }
        else if (target > arr[mid]){
            st = mid + 1; // Update st to narrow the search range
        }
        else {
            return mid; // Return the index if the target is found
        }
    }
    }
}

int main() {
    
    return 0;
}