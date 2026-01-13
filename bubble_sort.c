
#include <stdio.h>

void bubblesort(int array[], int n){
    int temp;
    for (int i =0;i<n-1;i++){
        for (int j =0 ; j<n-i-1;j++){
            if (array[j]>array[j+1]){
            temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    }

}

int main() {
    
    int n;
    printf("Enter the no of elements");

    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array", i+1);
        scanf("%d",&array[i]);
    }

    printf("Original Array \n");
    
    for(int  i =0;i<n;i++){
        printf(" %d ,", array[i]);
    }
    
    
    printf("\n Sorted Array \n");
    bubblesort(array,n);
    
    for(int  i =0;i<n;i++){
        printf(" %d ,", array[i]);
    }






    return 0;
}