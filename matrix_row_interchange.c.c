#include <stdio.h>

int diagonalsum(int mat[10][10], int n ,int m){
    int psum = 0 , ssum=0;
    for (int i=0; i< n ; i++){
        for (int j = 0; j<m;j++){
            if(i==j){
                psum+=mat[i][j];
            }
            if (i+j==n-1){
                ssum+=mat[i][j];
            }
        }
    }
     printf("Sum of primary diagonal = %d \n", psum);
     printf("Sum of secondary diagonal = %d \n", ssum);

}

int main()
{
    int m, n;
    int mat[10][10];
    printf("Enter the rows of the matrix : ");
    if (scanf("%d", &m) == 0)
    {
        printf("Invalid Input ");
        return 1;
    }
    printf("Enter the columns of the matrix : ");
    if (scanf("%d", &n) == 0)
    {
        printf("Invalid Input ");
        return 1;
    }

    for (int i=0; i < n; i++)
    {
        for (int j=0; j < m; j++)
        {
            printf("Enter the %d row and %d column element : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
  
    diagonalsum(mat,n,m);
    return 0;
}