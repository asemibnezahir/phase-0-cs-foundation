#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    //Tree Leafs
    int star=1,space=((in+1)/2+5)-1;
    for(int i=1;i<=(in+1)/2+5;i++)//for lines
    {
        for(int k=space;k>=1;k--)//for space
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)//for stars
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
    //for dhal
    for(int i=1;i<=5;i++)//for dhal lines
    {
        printf("     ");//for dhal spaces
        for(int j=1;j<=in;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}