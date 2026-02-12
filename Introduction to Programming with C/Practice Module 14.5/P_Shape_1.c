#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=in;
    for(int i=1;i<=in;i++)
    {
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}