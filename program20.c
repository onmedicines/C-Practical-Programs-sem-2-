#include <stdio.h>

void main()
{
    int len;
    printf("\nEnter the length of the array: ");
    scanf("%i", &len);

    int array[len];
    int min1, min2;

    printf("\nEnter the elements: \n ");
    int i;
    for (i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
        if (i == 0)
        {
            min1 = array[i];
            min2 = array[i];
        }
        else if (i != 0)
        {
            if (array[i] < min1)
            {
                min1 = array[i];
            }
            if (array[i] < min2 && array[i] != min1)
            {
                min2 = array[i];
            }
        }
    }

    printf("\nThe second smallest number is: %d", min2);
}
