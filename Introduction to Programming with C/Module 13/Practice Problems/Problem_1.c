#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=1,space=in-1;
    for(int i=1;i<=in;i++)
    {
        for(int k=1;k<=space;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("* ");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}