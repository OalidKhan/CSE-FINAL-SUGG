#include <stdio.h>
int main() 
{
    int N;
    printf("Enter size of the Array: ");
    scanf("%d",&N);
    int arr[N],ARR[N];
    int *ptr1 = arr,*ptr2 = ARR;
    printf("Enter elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",ptr1+i);
    }
    for(int i=0 ; i<N ; i++)
    {
        *(ptr2+i) = *(ptr1+i);
    }
    printf("After copy elements in second ARRAY: ");
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",*(ptr2+i));
    }
	return 0;
}
