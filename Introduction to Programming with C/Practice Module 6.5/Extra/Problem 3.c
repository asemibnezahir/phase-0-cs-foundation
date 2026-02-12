#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int ch=65;
    for(int j=1;j<=in;j++)
    {
        int out;
        out=j;
        for(int i=1;i<=out&&i>=1;i++)
        {
            printf("%c ",ch);
            
        }
        
        printf("\n");
        ch+=1;
    }
    return 0;
}