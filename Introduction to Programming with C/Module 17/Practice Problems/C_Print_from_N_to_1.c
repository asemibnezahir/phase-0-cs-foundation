#include<stdio.h>
void num_pri(int in,int i)
{
    if(i==in+1)
    {
        return;
    }
    num_pri(in,i+1);
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
    num_pri(in,1);
    return 0;
}