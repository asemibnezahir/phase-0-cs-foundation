#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    if(r==c)
    {
        int flag=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i!=j&&arr[i][j]!=0)
                {
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            int flag2=0;
            for(int i=0;i<r;i++)
            {
                if(arr[i][i]!=1)
                {
                    flag2=1;
                }
            }
            if(flag2==0)
            {
                printf("This is an identity matrix");
            }
            else
            {
                printf("This is not an identity matrix");
            }
        }
        else
        {
            printf("This is not an identity matrix");
        }
    }
    else
    {
        printf("This is not an identity matrix");
    }
    return 0;
}