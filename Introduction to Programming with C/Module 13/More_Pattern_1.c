//Reverse Triangle

#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=1;
    int space=in-1;
    for(int i=1;i<=in;i++) //For Lines
    {

        for(int k=1;k<=space;k++) //For Space to make pyramid
        {
            printf(" ");
        }

        for(int j=1;j<=star;j++) //For Printing Stars
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}