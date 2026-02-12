#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int j=1;j<=in;j++)
    {
        for(int i=1;i<=j;i++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    int m=in-1;
    for(int j=1;j<=in;j++)
    {
        for(int s=1;s<=j;s++)
        {
            printf(" ");
        }
        for(int i=1;i<=m;i++)
        {
            printf("%d",i);
        }
        printf("\n");
        m--;
    }
    return 0;
}