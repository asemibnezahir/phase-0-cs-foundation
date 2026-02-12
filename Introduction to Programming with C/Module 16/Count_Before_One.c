#include<stdio.h>
int count_before_one(int arr[],int in)
{
    int cnt=0;
    for(int i=0;i<in;i++)
    {
        if(arr[i]==1)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    return cnt;
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
    printf("%d",count_before_one(arr,in));
    return 0;
}