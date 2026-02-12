#include<stdio.h>
int main()
{
    int a,k;
    scanf("%d %d",&a,&k);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<k&&arr[i]>0;i++)
    {
        sum+=arr[i];
    }
    printf("%lld",sum);
    return 0;
}