#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter any string: ");
    fgets(str , 100 , stdin);
    int vowel=0,consonant=0,length = strlen(str);
    for(int i=0 ; i<length ; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                vowel++;
            }
            else
                consonant++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                vowel++;
            }
            else
                consonant++;
        }
    }
    printf("Total Vowel: %d\nTotal Consonant: %d",vowel,consonant);
	return 0;
}
