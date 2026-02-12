#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int arr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<in;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<in;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}