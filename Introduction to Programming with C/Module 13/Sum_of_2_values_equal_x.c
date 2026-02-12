//Using Retuen 0;
#include<stdio.h>
int main()
{
    int in,x;
    scanf("%d",&in);
    int arr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}