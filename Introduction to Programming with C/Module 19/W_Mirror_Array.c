#include<stdio.h>
int main()
{
    int in1,in2;
    scanf("%d %d",&in1,&in2);
    int arr[in1][in2];
    for(int i=0;i<in1;i++)
    {
        for(int j=0;j<in2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<in1;i++)
    {
        for(int j=in2-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}