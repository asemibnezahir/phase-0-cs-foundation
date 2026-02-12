#include<stdio.h>
void count(int in)
{
    for(int i=1;i<=in;i++)
    {
        printf("%d",i);
        if(i!=in)
        {
            printf(" ");
        }
    }
}
int main()
{
    int in;
    scanf("%d",&in);
    count(in);
    return 0;
}