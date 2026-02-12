#include<stdio.h>
#include<limits.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int m=1;m<=test;m++)
    {
        int in;
    scanf("%d",&in);
    int min=INT_MAX;
    int val;
    int as[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&as[i]);
    }
    for(int i=1,j=2;i>=1&&i<j&&j<=in;j++)
    {
        val=as[i-1]+as[j-1]+j-i;
        if(val<min)
        {
            min=val;
        }
        if(j==in)
        {
            i++;
            j=i;
        }
    }
    printf("%d\n",min);
    }
    return 0;
}