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


    //My Method
    /* 
    int flag=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(_2arr[i][j]!=0)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("This is a Zero Matrix");
    }
    if(flag==1)
    {
        printf("This is a not a Zero Matrix");
    } 
    */

    //According to module
    int base=r*c;
    int zero=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(_2arr[i][j]==0)
            {
                zero++;
            }
        }
    }
    if(base==zero)
    {
        printf("This is a Zero Matrix");
    }
    else
    {
        printf("This is not a Zero Matrix");
    }
    return 0;
}