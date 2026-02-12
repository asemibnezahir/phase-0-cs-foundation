#include<stdio.h>
void num_pri(int in,int i)
{
    if(i==in+1)
    {
        return;
    }
    printf("%d\n",i);
    num_pri(in,i+1);
}
int main()
{
    int in;
    scanf("%d",&in);
    num_pri(in,1);
    return 0;
}