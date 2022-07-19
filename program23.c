#include <stdio.h>
#include <math.h>


int bintodeci(int num, int counter)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return ((num % 10) * pow(2, counter)) + bintodeci(num / 10, counter + 1);
    }
}

void main()
{
    int num;
    printf("\nEnter the binary number: ");
    scanf("%f", &num);
    printf("%d", (bintodeci(num, 0)));
}