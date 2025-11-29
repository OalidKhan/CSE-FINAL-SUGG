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
    int Unique_Number[N],k=0,count;
    for(int i=0 ; i<N ; i++)
    {
        count = 0;
        for(int j=0 ; j<N ; j++)
        {
            if(j==i)
            {
                continue;
            }
            else if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
