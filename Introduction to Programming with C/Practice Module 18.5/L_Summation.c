#include<stdio.h>
long long int sum(int arr[],int in,int i)
{
    if(i==in)
    {
        return 0;
    }
    long long int val=sum(arr,in,i+1);
    return val+arr[i];
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
    long long int ans=sum(arr,in,0);
    printf("%lld",ans);
    return 0;
}