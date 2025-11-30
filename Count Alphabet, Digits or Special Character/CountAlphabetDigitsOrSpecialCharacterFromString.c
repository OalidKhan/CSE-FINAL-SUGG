#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter any string: ");
    fgets(str , 100 , stdin);
    str[strcspn(str, "\n")] = '\0';
    int alphabet=0,digit=0,Special_Character=0,length = strlen(str);
    for(int i=0 ; i<length ; i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            alphabet++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else if(str[i]!=' ')
        {
            Special_Character++;
        }
    }
    printf("Total Alphabet: %d\nTotal Digit: %d\nTotal Special Character: %d",alphabet,digit,Special_Character);
	return 0;
}
