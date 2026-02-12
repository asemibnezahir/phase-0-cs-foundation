#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int as[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&as[i]);
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(as[i]<min)
        {
            min=as[i];
        }
        if(as[i]>max)
        {
            max=as[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(as[i]==min)
        {
            as[i]=max;
        }
        else if(as[i]==max)
        {
            as[i]=min;
        }
        printf("%d ",as[i]);
    }
    return 0;
}