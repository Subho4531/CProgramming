#include <stdio.h>
#include <stdbool.h>

void swap(int* i , int* j){
    int temp = *i;
    *i = *j;
    *j= temp; 
}
void bubblesort(int *arr , int n){
    bool swapped;
    for(int i = 0 ; i<n-1 ; i++){

        swapped = false ; 

        for(int j = 0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j] , &arr[j+1]);
                swapped = true;
            }

        }

        
    }
}
int main() {
    int arr[] = {8,9,5,2,5,78,25};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);

    for(int i=0 ; i<n ;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
