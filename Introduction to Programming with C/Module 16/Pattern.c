//Diamond Shape

#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    //Diamond Upper Part
    int hashu=1;
    int spaceu=in-1;
    for(int i=1;i<=in;i++) //For Lines
    {

        for(int k=1;k<=spaceu;k++) //For Space to make pyramid
        {
            printf(" ");
        }

        for(int j=1;j<=hashu;j++) //For Printing Stars
        {
            if(i%2!=0)
            {
                printf("#");
            }
            else if(i%2==0)
            {
                printf("-");
            }
        }
        printf("\n");
        hashu+=2;
        spaceu--;
    }

    //Diamond Lower Part
    int hashl=in*2-3,spacel=1;
    for(int i=in;i>=1;i--)
    {
        for(int a=1;a<=spacel;a++)
        {
            printf(" ");
        }
        for(int j=1;j<=hashl;j++)
        {
            if(i%2==0)
            {
                printf("#");
            }
            else if(i%2!=0)
            {
                printf("-");
            }
        }
        printf("\n");
        hashl-=2;
        spacel++;
    }
    return 0;
}