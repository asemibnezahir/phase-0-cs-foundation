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
    int specir;
    scanf("%d",&specir);

    //Printing a specific row
    for(int i=0;i<c;i++)
    {
        printf("%d ",_2arr[specir][i]);
    }


    int specic;
    scanf("%d",&specic);
    //Printing a specific column
    for(int i=0;i<r;i++)
    {
        printf("%d ",_2arr[i][specic]);
    }
    return 0;
}