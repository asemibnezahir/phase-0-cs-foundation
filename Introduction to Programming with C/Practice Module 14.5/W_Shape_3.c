#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=1,space=in-1;
    for(int i=1;i<=in;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star*2-1;k++)
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }
    int starl=in,spacel=0;
    for(int i=1;i<=in;i++)
    {
        for(int j=1;j<=spacel;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=starl*2-1;k++)
        {
            printf("*");
        }
        starl--;
        spacel++;
        printf("\n");
    }

    return 0;
}