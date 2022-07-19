#include<stdio.h>

void main()
{
    int len;
    printf("\nEnter the length of the array: ");
    scanf("%i", &len);

    int array[len];
    int max1, max2;

    printf("\nEnter the elements: \n ");
    int i;
    for(i=0;i<len;i++)
    {
        scanf("%d", &array[i]);
        if (i == 0)
        {   
            max1 = array[i];
            max2 = array[i];
        }
        else if(i!=0)
        {
            if(array[i]>max1)
            {
                max1=array[i];
            }
            if (array[i] > max2 && array[i] != max1)
            {
                max2=array[i];
            }
        }
    }

    printf("\nThe second largest number in the array is: %d", max2);
}