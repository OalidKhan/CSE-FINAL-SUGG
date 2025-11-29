#include <stdio.h>
int main() 
{
    int row,column,val;
    printf("Enter Row and Column for the Matrix: ");
    scanf("%d %d",&row,&column);
    int Matrix[row][column];
    printf("Enter elements: ");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            scanf("%d",&Matrix[i][j]);
        }
    }
    printf("Enter Multiplier: ");
    scanf("%d",&val);
    printf("Output: \n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            printf("%d ",val * Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
