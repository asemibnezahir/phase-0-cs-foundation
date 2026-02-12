#include<stdio.h>
void even_index(int arr[],int in,int i)
{
    if(in%2==0&&i==in)
    {
        return;
    }
    else if(in%2!=0&&i==in+1)
    {
        return;
    }
    even_index(arr,in,i+2);
    printf("%d",arr[i]);
    if(i!=0)
    {
        printf(" ");
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
    even_index(arr,in,0);
    return 0;
}