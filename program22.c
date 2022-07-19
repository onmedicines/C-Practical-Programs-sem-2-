#include <stdio.h>

void main()
{
    unsigned short int year;
    printf("\nEnter the year: ");
    scanf("%hu", &year);

    if (year % 400 == 0 || (year % 4 && year % 100 != 0))
        printf("\n%hu is a leap year.", year);
    else
        printf("\n%hu is not a leap year.", year);
}