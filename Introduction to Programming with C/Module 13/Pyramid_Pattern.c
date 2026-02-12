//My Personal Method
/* 
#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int spc=in*2;
    for(int i=1,ptnp=1;i<=in*2;i+=2,ptnp+=2)
    {
        for(int a=1;a<=spc/2;a++)
        {
            printf(" ");
        }
        spc-=2;
        for(int j=1;j<=ptnp;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 
*/

//According to class
#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int star=1;
    int space=in-1;
    for(int i=1;i<=in;i++) //For Lines
    {

        for(int k=1;k<=space;k++) //For Space to make pyramid
        {
            printf(" ");
        }

        for(int j=1;j<=star;j++) //For Printing Stars
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
    return 0;
}