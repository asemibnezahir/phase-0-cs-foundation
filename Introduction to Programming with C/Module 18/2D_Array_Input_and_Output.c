#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int _2D[r][c];
    //Taking 2D array input with nested loop
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&_2D[i][j]);
        }
    }
    //Printing 2D array value with nested loop
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",_2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}