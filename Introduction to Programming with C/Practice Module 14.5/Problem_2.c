#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=in*2-1,space=0;
    for(int i=1;i<=in;i++)
    {
        for(int k=1;k<=space;k++)
        {
            printf(" ");
        }
        for(int j=star;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }
    return 0;
}