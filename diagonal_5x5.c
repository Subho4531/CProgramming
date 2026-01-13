#include <stdio.h>

int main() {
    int mat[5][5] ;

    for(int i = 0 ; i<5;i++){
        
        for(int j = 0 ; j<5;j++){
            printf("Enter the %d row and %d column element ",i,j);

            scanf("%d",&mat[i][j]);
        }

    }

    for(int i = 0 ; i<5;i++){
        
        for(int j = 0 ; j<5;j++){

          if ( i == j){
            printf("%d ",mat[i][j]);
          }
          else{
            printf("0 ");
          }

    
        }

        printf("\n");


    }


    
    return 0;
}