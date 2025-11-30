#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter any string: ");
    fgets(str , 100 , stdin);
    int word=1,length = strlen(str);
    for(int i=0 ; i<length ; i++)
    {
        if(str[i]==' ')
        {
            word++;
        }
    }
    printf("Total Word: %d",word);
	return 0;
}
