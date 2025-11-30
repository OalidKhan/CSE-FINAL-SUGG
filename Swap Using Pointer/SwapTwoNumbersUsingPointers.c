#include <stdio.h>
int main() 
{
    int num1,num2;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter two numbers: ");
    scanf("%d %d",ptr1,ptr2);
    printf("Before swaping value: %d %d\n",*ptr1,*ptr2);
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("After swaping value: %d %d",*ptr1,*ptr2);
	return 0;
}
