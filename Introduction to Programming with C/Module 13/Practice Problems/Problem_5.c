#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=1;
    for(int i=1;i<=in;i++)
    { 
        for(int j=1;j<=star;j++)
        {
            int alp=j+64;
            printf("%c ",alp);
        }
        printf("\n");
        star++;
    }
    return 0;
}