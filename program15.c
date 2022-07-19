#include<stdio.h>

void main()
{
    int a=0, b=1;
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    printf("%d\t", a);
    printf("%d\t", b);
    int i;
    for(i=3;i<=n;i++)
    {
        b=a+b;
        a=b-a;
        printf("%d\t", b);
    }
}
