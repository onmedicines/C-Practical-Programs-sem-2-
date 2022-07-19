
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main()
{
    // initialization
    int counter = 0;
    int len1 = 0, len2 = 0;
    char string[20], substring[20];

    // taking input
    printf("\nEnter the string: ");
    scanf("%s", string);
    printf("\nEnter the substring: ");
    scanf("%s", substring);

    // computation
    int i = 0, j = 0;
    while (string[i] != '\0')
    {
        len1++;
        i++;
    }
    while (substring[j] != '\0')
    {
        len2++;
        j++;
    }

    int k = 0;
    char temp[20];
    bool check = false;
    for (i = 0; i < (len1 - len2 + 1); i++)
    {
        for (j = i; j < len2 + i; j++)
        {
            temp[k] = string[j];
            k++;
        } // end of inner for
        temp[k] = '\0';
        k = 0;
        if (strcmp(temp, substring) == 0)
        {
            check = true;
            break;
        }

    } // end of outer for

    if (check == true)
        printf("\nSubstring is present");
    else
        printf("\nSubstring is not present");

} // end of main