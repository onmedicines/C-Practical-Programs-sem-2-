#include<stdio.h>
#include<stdbool.h>

bool prime(int x)
{
    int i, counter=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            counter++;
            break;
        }
    }
        if(counter!=0)
        return false;
        else
        return true;
}

void main()
{
    int i, n;
    printf("\nEnter the number limit: ");
    scanf("%d", &n);

    printf("\nThe prime numbers are: ");
    for(i=2;i<n;i++)
    {
        if(prime(i)==true)
        printf("\n%2d", i);
    }
}