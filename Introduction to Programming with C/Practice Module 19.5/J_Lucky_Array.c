#include<stdio.h>
#include<limits.h>
int main()
{
    int in;
    scanf("%d",&in);
    int arr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<in;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int cnt=0;
    for(int i=0;i<in;i++)
    {
        if(min==arr[i])
        {
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}