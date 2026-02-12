#include<stdio.h>
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int take,give;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                int num1=i-2;
                int num2=j-2;
                take=abs(num1);
                give=abs(num2);
            }
        }
    }
    printf("%d",take+give);
    return 0;
}