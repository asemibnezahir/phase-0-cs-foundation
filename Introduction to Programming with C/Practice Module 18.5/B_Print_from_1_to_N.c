#include<stdio.h>
void req(int in,int i)
{
    if(i==in+1)
    {
        return;
    }
    printf("%d\n",i);
    req(in,i+1);
}
int main()
{
    int in;
    scanf("%d",&in);
    req(in,1);
    return 0;
}