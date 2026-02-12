#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int j=1,pt1=1;j<=in;j++,pt1++)
    {
        for(int i=1;i<=pt1;i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}