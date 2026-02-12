#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int value=in;
    for(int i=1;i<=in;i++)
    {
        for(int j=1;j<=value;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        value--;
    }
    return 0;
}