#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            cnt0++;
        }
        else if(arr[i]==1)
        {
            cnt1++;
        }
    }
    printf("%d %d",cnt0,cnt1);
    return 0;
}