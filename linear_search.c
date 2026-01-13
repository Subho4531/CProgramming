#include <stdio.h>

int linearsearch(int arr[], int size, int n){
    for( int i = 0 ; i < size ; i++){
        if (arr[i] == n){
            return i;
        }
    }
    return -1;
}


int main() {
    int arr[] = {1,6,2,8,4};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int index = linearsearch(arr, size, n);
    
    if(index != -1){
        printf("%d found at index %d", n, index);
    } else {
        printf("%d not found in array", n);
    }
    return 0;
}