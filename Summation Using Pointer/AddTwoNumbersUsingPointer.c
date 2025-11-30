#include <stdio.h>
int main() 
{
    int num1,num2,sum;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter two numbers: ");
    scanf("%d %d",ptr1,ptr2);
    sum = *ptr1 + *ptr2;
    printf("The Summation of two numbers: %d",sum);
	return 0;
}
