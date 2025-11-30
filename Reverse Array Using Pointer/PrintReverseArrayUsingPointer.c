#include <stdio.h>
int main() 
{
    int N;
    printf("Enter size of the Array: ");
    scanf("%d",&N);
    int arr[N];
    int *ptr = arr;
    printf("Enter elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",ptr+i);
    }
    printf("Original Array: ");
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    for(int i=0,j=N-1 ; i<j ; i++,j--)
    {
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr+j);
        *(ptr+j) = temp;
    }
    printf("Reversed Array: ");
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",*(ptr+i));
    }
	return 0;
}
