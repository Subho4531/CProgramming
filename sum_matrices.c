#include <stdio.h>
int matsum(int matp[10][10], int matq[10][10], int row, int col)
{
    int sum[10][10];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = matp[i][j] + matq[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matp[10][10], matq[10][10];
    int row, col;
    printf("Enter the no of rows : ");
    if (scanf("%d", &row) == 0 || row < 0)
    {
        printf("Invalid Input");
        return 1;
    }
    printf("Enter the no of columns : ");
    if (scanf("%d", &col) == 0 || col < 0 || (row, col) == 0)
    {
        printf("Invalid Input");
        return 1;
    }

    printf("Enter the first matrix  \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %d row %d column element: ",i,j);
            scanf("%d", &matp[i][j]);
        }
    }
    printf("Enter the second matrix  \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %d row %d column element: ", i, j);
            scanf("%d", &matq[i][j]);
        }
    }

    matsum(matp, matq, row, col);

    return 0;
}