#include <stdio.h>
int main() 
{
    int N;
    printf("Enter size of the Array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Input array elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<N ; i++)
    {
        for(int j=i+1 ; j<N ; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

