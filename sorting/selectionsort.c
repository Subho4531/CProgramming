#include <stdio.h>

void swap(int * i, int * j){
    int temp  = *i;
    *i=*j;
    *j=temp;
}

void selectionsort(int* arr , int n){
    for (int i = 0; i < n-1 ; i++){
        int small = i;
        for (int j = i+1 ; j<n ; j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        if(i!=small){
            swap(&arr[i] , &arr[small]);

        }

    }

}





int main() {
    int arr[] = {8,9,5,2,5,8,6,5};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);

    for(int i=0 ; i<n ;i++){
        printf("%d ",arr[i]);
    }

    
    return 0;
}