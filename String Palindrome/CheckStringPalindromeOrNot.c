#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter any string: ");
    fgets(str , 100 , stdin);
    str[strcspn(str, "\n")] = '\0';
    int count=0,length = strlen(str);
    for(int i=0,j=length-1 ; i!=j ; i++,j--)
    {
        if(str[i]!=str[j])
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("The string is Palindrome.");
    }
    else
    {
        printf("The string is not Palindrome.");
    }
	return 0;
}
