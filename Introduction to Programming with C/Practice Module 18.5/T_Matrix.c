#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int arr[in][in];
    for(int i=0;i<in;i++)
    {
        for(int j=0;j<in;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int prisum=0,seconsum=0;
    for(int i=0;i<in;i++)
    {
        for(int j=0;j<in;j++)
        {
            if(i==j)
            {
                prisum+=arr[i][j];
            }
            if(i+j==in-1)
            {
                seconsum+=arr[i][j];
            }
        }
    }
    int diff=prisum-seconsum;
    int ans=abs(diff);
    printf("%d",ans);
    return 0;
}