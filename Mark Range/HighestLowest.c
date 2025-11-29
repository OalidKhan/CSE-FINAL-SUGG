#include <stdio.h>
int main() 
{
    int N;
    printf("Enter number of students: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter %d marks: ",N);
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int lowest,highest;
    lowest = arr[0];
    highest = arr[0];
    for(int i=0 ; i<N ; i++)
    {
        if(lowest>arr[i])
        {
            lowest = arr[i];
        }
        else if(highest<arr[i])
        {
            highest = arr[i];
        }
    }
    printf("Mark Range: %d-%d",lowest,highest);
}
