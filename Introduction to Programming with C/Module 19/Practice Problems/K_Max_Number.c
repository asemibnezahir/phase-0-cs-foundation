#include<stdio.h>
int max(int arr[],int in,int i)
{
    if(i==in-1)
    {
        return arr[i];
    }
    int test=max(arr,in,i+1);
    if(test>arr[i])
    {
        return test;
    }
    else
    {
        return arr[i];
    }
}
int main()
{
    int in;
    scanf("%d",&in);
    int arr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=max(arr,in,0);
    printf("%d",ans);
    return 0;
}