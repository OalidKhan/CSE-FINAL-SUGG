#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter any string: ");
    fgets(str , 100 , stdin);
    int length = strlen(str);
    printf("After Convert: ");
    for(int i=0 ; i<length ; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("%c",str[i]-32);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
	return 0;
}
