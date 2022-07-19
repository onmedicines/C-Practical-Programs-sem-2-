#include <stdio.h>
#include <math.h>

#define INTEGER 0
#define DECIMAL 1

int reverse(int num)
{
    int i, rev = 0;
    for (i = num; i > 0; i /= 10)
        rev = rev * 10 + i % 10;

    return rev;
}

float bintodeci(int num, int counter, int choice)
{
    if (num == 0)
    {
        return 0.0;
    }
    else if (choice == INTEGER)
    {
        return ((num % 10) * pow(2, counter)) + bintodeci(num / 10, counter + 1, INTEGER);
    }
    else if (choice == DECIMAL)
    {
        return ((num % 10) * pow(2, counter)) + bintodeci(num / 10, counter - 1, DECIMAL);
    }
}

void main()
{
    float num, deci_num;
    printf("\nEnter the binary number: ");
    scanf("%f", &num);
    int integer = (int)num;
    int decimal = (int)(num * 1000000) % 1000000;
    printf("%f", (bintodeci(integer, 0, INTEGER)) + (bintodeci(reverse(decimal), -1, DECIMAL)));
}