#include <stdio.h>
int main() 
{
    int row1,col1;
    printf("Enter Row and Column for first matrix: ");
    scanf("%d %d",&row1,&col1);
    int row2,col2;
    printf("Enter Row and Column for second matrix: ");
    scanf("%d %d",&row2,&col2);
    if(row1!=row2 || col1!=col2)
    {
        printf("Matrices are not Summable.");
    }
    else
    {
        int first[row1][col1],second[row2][col2];
        printf("Enter elements for first matrix: ");
        for(int i=0 ; i<row1 ; i++)
        {
            for(int j=0 ; j<col1 ; j++)
            {
                scanf("%d",&first[i][j]);
            }
        }
        printf("Enter elements for second matrix: ");
        for(int i=0 ; i<row2 ; i++)
        {
            for(int j=0 ; j<col2 ; j++)
            {
                scanf("%d",&second[i][j]);
            }
        }
        int result[row1][col1];
        for(int i=0 ; i<row2 ; i++)
        {
            for(int j=0 ; j<col2 ; j++)
            {
                result[i][j] = first[i][j] + second[i][j];
            }
        }
        printf("Sum of both Matrix: \n");
        for(int i=0 ; i<row2 ; i++)
        {
            for(int j=0 ; j<col2 ; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
