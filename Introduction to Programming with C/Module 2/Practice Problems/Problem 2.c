#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number<0)
    {
        printf("This Number is Negative");
    }
    else if(number>0)
    {
        printf("This Number is Positive");
    }
    else
    {
        printf("This Number is Zero");
    }
    return 0;
}