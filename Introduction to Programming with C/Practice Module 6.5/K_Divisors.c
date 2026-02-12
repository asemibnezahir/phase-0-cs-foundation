#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int divisor;
    for(int i=1;i<=in;i++)
    {
        divisor=i;
        if(in%divisor==0)
        {
            printf("%d\n",divisor);
        }
    }
    
    return 0;
}