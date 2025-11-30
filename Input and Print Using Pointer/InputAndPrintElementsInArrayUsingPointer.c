#include <stdio.h>
int main() 
{
    int N;
    printf("Enter size of the Array: ");
    scanf("%d",&N);
    int arr[N];
    int *ptr = arr;
    printf("Enter Elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Print Elements: ");
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",*(ptr+i));
    }
	return 0;
}
