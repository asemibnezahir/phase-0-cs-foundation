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
    for(int i=0,j=in-1;i<j;i++,j--)
    {
        
        printf("%d %d ",arr[i],arr[j]);
    }
    if(in%2!=0)
    {
        printf("%d",arr[in/2]);
    }
    return 0;
}