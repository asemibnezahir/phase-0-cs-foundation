#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int i=1,ptn2=in;i<=in;i++,ptn2--)
    {
        for(int j=1;j<=ptn2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}