#include <stdio.h>

int main() {
    
    int rows , columns ;
    
    printf("Enter the number of rows :");
    scanf("%d",&rows);
    printf("Enter the number of columns :");
    scanf("%d",&columns);
    
    int mat1[rows][columns] , mat2[rows][columns] , mat3[rows][columns];
    
    for ( int i = 0 ; i < rows; i++){
        for ( int j = 0 ; j < columns; j++){
            printf("Enter the %d row %d column element  : " , i , j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for ( int i = 0 ; i < rows; i++){
        for ( int j = 0 ; j < columns; j++){
            printf("Enter the %d row %d column element  : " , i , j);
            scanf("%d", &mat2[i][j]);
        }
    }


    for ( int i = 0 ; i < rows; i++){
        for ( int j = 0 ; j < columns; j++){
            mat3[i][j]=0;
            for (int k = 0 ;k < columns;k++){
                mat3[i][j]  += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    
    printf("Multiplied Matrix \n");
    for ( int i = 0 ; i < rows; i++){
        for ( int j = 0 ; j < columns; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    

    



    return 0;
}