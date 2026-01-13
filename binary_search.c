#include <stdio.h>

int binarysearch(int arr[], int size, int n){
    int start=0 , end=size-1 ;

    while (start <= end){
        int mid = (start + end)/2;
        if(n > arr[mid]){
            start = mid+1;
        }
        else if(n< arr[mid]){
            end=mid -1;
        }
        else{
            return mid;
        }



    }

    return -1;
    

}


int main() {
    int arr[] = {1,0,6,2,8,4};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int index = binarysearch(arr, size, n);
    
    if(index != -1){
        printf("%d found at index %d", n, index);
    } else {
        printf("%d not found in array", n);
    }
    return 0;
}