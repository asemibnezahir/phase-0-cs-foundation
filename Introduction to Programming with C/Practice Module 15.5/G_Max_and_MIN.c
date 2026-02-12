#include<stdio.h>
#include<limits.h>
void min_max(int arr[],int in)
{
    for(int i=0;i<in;i++)
    {
       scanf("%d",&arr[i]); 
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<in;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(int i=0;i<in;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
}

int main()
{
    int in;
    scanf("%d",&in);
    int arr[in];
    min_max(arr,in);
    return 0;
}