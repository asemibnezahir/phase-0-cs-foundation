#include<stdio.h>
int main()
{
    int in,ekok,doshok;
    scanf("%d",&in);
    ekok=in%10;
    doshok=in/10;
    if(ekok==0||doshok==0)
    {
        printf("YES");
    }
    else
    {
        if (ekok%doshok==0||doshok%ekok==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}