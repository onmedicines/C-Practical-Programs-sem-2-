#include<stdio.h>

void main()
{
    int length;
    printf("\nEnter the length of the list: ");
    scanf("%d", &length);
    int arr[length];
    printf("\nEnter the integers: \n");
    int i, max, min;
    for(i=0;i<length;i++)
    {
        scanf("%d", &arr[i]);
        if(i==0)
        {
            max=arr[i];
            min=arr[i];
        }
        else
        {
            if(arr[i]>max)
                max=arr[i];
            if(arr[i]<min)
                min=arr[i];
        }
    }
    
    printf("\nThe largest integer is %d and the smallest is %d.", max, min);

}