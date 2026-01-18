/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void quicksort(int *arr, int low, int high);
int partition(int *arr, int low, int high);
void swap(int *arr, int i, int j);


int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize; 
    quicksort(nums,0,numsSize-1);
    return nums;
    
}

void quicksort(int * arr,int low,int high){
    
        if(low<high){
            int pIndex=partition(arr,low,high);
            quicksort(arr,low,pIndex-1);
            quicksort(arr,pIndex+1,high);
        }
    
}

int partition(int *arr,int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while (i<j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j > low  && arr[j] > pivot) {
            j--;
        }
        if (i >= j) {
            break;
        }
        swap(arr, i, j);
    }
    swap(arr,low,j);
    return j;
}


void swap(int *arr , int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}