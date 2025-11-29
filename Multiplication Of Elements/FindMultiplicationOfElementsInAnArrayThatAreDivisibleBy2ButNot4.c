#include <stdio.h>
int main() 
{
    int N;
    printf("Enter size of the Array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long result=1;
    for(int i=0 ; i<N ; i++)
    {
        if(arr[i]%2==0 && arr[i]%4!=0)
        {
           result = result * arr[i]; 
        }
    }
    printf("Multiplication of elements in an array that are divisible by 2 but not 4 : %lld",result);
    return 0;
}
