#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int _2arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&_2arr[i][j]);
        }
    }
    
    if(r==c)
    {
        int flag=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i+j!=r-1&&_2arr[i][j]!=0)
                {
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            printf("This is a Secondary Diagonal Matrix");
        }
        else
        {
            printf("This is not a Secondary Diagonal Matrix");
        }
    }
    
    else
    {
        printf("This is not a Diagonal Matrix");
    }
    return 0;
}