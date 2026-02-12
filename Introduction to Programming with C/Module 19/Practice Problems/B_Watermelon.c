#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    if(in!=2)
    {
        if(in%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}