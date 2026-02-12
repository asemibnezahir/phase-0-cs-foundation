#include<stdio.h>
void in(int arr[])
{
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int arr[5];
    in(arr);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}