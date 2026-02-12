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

    if(r==1)
    {
        printf("This is a Row Matrix");
    }
    else if(c==1)
    {
        printf("This is a Column Matrix");
    }
    if(r==c)
    {
        printf("This is a Square Matrix");
    }
    
    return 0;
}