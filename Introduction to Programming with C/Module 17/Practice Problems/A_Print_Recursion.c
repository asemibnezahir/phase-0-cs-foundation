#include<stdio.h>
void req(int in,int i)
{
    printf("I love Recursion\n");
    if(i==in)
    {
        return;
    }
    req(in,i+1);
}
int main()
{
    int in;
    scanf("%d",&in);
    req(in,1);
    return 0;
}