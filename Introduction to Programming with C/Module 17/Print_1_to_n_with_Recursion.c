#include<stdio.h>
void num(int in,int i)
{
    printf("%d ",i);
    if(i==in)
    {
        return;
    }
    num(in,i+1);
}
int main()
{
    int in;
    scanf("%d",&in);
    int i=1;
    num(in,i);
    return 0;
}