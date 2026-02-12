#include<stdio.h>
void change_it(int arr[],int in)
{
    arr[in-1]=100;
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
    change_it(arr,in);
    for(int i=0;i<in;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}