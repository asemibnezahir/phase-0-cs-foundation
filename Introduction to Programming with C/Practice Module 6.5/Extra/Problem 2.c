#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int out=in;
    for(int j=in;j>=1&&j<=in;j--)
    {
        for(int i=out;i<=out&&i>=1;i--)
        {
            printf("%d ",i);
        }
        printf("\n");
        out=out-1;
        
    }
    return 0;
}