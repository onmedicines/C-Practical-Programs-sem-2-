#include<stdio.h>

void main()
{
    float temp;
    char choice;
    printf("\nEnter 'F' for conversion from faherenite to celcius or 'C' for vice versa: ");
    scanf("%c", &choice);

    if(choice=='F' || choice=='f')
    {
        printf("\nEnter the temperature in faherenite: ");
        scanf("%f", &temp);
        printf("\nThe temperature is %.1f celcius.", 5*(temp-32)/9);
    }
    if (choice == 'C' || choice == 'c')
    {
        printf("\nEnter the temperature in celsius: ");
        scanf("%f", &temp);
        printf("\nThe temperature is %.1f faherenite.", (9*temp/5)+32);
    }
}