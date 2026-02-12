#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=1,space=in-1;
    for(int i=1;i<=in;i++)
    {
        for(int j=space;j>=0;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}