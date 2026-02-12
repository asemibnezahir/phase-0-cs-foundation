#include<stdio.h>
#include<stdbool.h>
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
    int check;
    bool flag=false;
    scanf("%d",&check);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==check)
            {
                flag=true;
            }
        }
    }
    if(flag==false)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }
    return 0;
}