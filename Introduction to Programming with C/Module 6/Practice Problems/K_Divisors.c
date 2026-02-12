#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int i=1;i<=in;i++)
    {
        if(in%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}