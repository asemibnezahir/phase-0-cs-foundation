#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int space=in-1,num=1;
    for(int i=1;i<=in;i++)
    {
        for(int j=space;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=num;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
        space--;
        num++;
    }
    return 0;
}