#include<stdio.h>
void req(int in,int i)
{
    if(i==in+1)
    {
        return;
    }
    req(in,i+1);
    printf("%d",i);
    if(i!=1)
    {
        printf(" ");
    }
}
int main()
{
    int in;
    scanf("%d",&in);
    req(in,1);
    return 0;
}