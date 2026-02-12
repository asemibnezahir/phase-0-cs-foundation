#include<stdio.h>
void reverse(int arr[],int in)
{
    int i,j;
    for(i=0,j=in-1;i<j;i++,j--)
    {
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
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
    reverse(arr,in);
    for(int i=0;i<in;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}