#include<stdio.h>
#include<string.h>

void main()
{
    char string1[20];
    char string2[20];
    char new_string[40];

    printf("\nEnter the first string: ");
    scanf("%s", &string1);
    printf("\nEnter the second string: ");
    scanf("%s", &string2);
    
    int len1=strlen(string1);      
    int len2=strlen(string2);

    int i, k=0;
    for(i=0;i<len1;i++)
    {
        new_string[k]=string1[i];
        k++;
    }
    for(i=0;i<len2;i++)
    {
        new_string[k]=string2[i];
        k++;
    }
    new_string[k]='\0';

    printf("\nNew string is %s.", new_string);
}
