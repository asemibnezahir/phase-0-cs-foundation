#include<stdio.h>
void shift_zeros(int arr[],int in,int i)
{
    int cnt=0;
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[i]==0)
            {
                arr[i]=arr[j];
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<in;i++)
    {
        printf("%d",arr[i]);
        if(i!=in-1)
        {
            printf(" ");
        }
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
    shift_zeros(arr,in,0);

    return 0;
}