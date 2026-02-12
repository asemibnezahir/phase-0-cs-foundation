#include<stdio.h>
void print_array(int arr[],int in,int i)
{
    if(i==in)
    {
        return;
    }
    printf("%d ",arr[i]);
    print_array(arr,in,i+1);
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
    print_array(arr,in,0);
    return 0;
}