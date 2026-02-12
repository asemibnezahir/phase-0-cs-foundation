//Reverse Pyramid
#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=in*2-1,space=0;
    for(int i=in;i>=1;i--)
    {
        for(int a=1;a<=space;a++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }
    return 0;
}