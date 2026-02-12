#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int as[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&as[i]);
    }

    for(int i=in-1;i>0;i--)
    {
        if(i%2!=0)
        {
            printf("%d ",as[i]);
        }
    }
    return 0;
}