#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int j=1;j<=in;j++)
    {
        int out;
        out=j;
        for(int i=1;i<=out&&i>=1;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}