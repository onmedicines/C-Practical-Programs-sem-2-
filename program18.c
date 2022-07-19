#include<stdio.h>

void main()
{
    int number;
    printf("\nEnter the number: ");
    scanf("%d", &number);

    int i, sum=0;
    for(i=number;i>0;i/=10)
    {
        sum+=i%10;
    }

    printf("\nThe sum of digits is %d.", sum);
}