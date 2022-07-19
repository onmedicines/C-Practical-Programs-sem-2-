#include<stdio.h>
void main()
{
    int i;
    char input_str[100], str[100];
    printf("\nEnter the string to reversed: ");
    scanf("%s", &input_str);
    char ch=' ';
    for(i=0;ch!='\0';i++)
    {
        ch=input_str[i];
    }
    int str_length=i;
    int temp_length=str_length;
    for(i=0;i<str_length;i++)
    {
        str[i]=input_str[temp_length-1];
        temp_length--;
    }
    printf("\nThe reversed string is:");
    i=0;
    while(i<str_length)
    {
        printf("%c", str[i]);
        i++;
    }
}
