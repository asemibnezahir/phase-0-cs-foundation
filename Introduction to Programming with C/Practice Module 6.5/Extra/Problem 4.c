#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int j=1;j<=in*2;j+=2)
    {
        int out;
        out=j;
        for(int i=1;i<=out&&i>=1;i++)
        {
            printf("%c",'*');
            
        }
        
        printf("\n");
    }
    return 0;
}