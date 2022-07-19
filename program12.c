#include<stdio.h>

void main()
{
    int i, words=0;
    char sentence[100];
    printf("\nEnter the sentence: ");
    scanf("%[^\n]s", &sentence);

    for(i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]==' ')
        words++;
    }

    printf("\nThe given sentence has %d words.", words+1);
}