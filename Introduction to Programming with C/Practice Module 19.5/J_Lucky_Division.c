#include<stdio.h>
int lucky(int in)
{
    while(in!=0)
    {
        int test=in%10;
        in/=10;
        if(test!=4&&test!=7)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int in;
    scanf("%d",&in);
    if(lucky(in)==1)
    {
        printf("YES");
    }
    else if(lucky(in)==0)
    {
        int flag=0;
        for(int i=1;i<=in;i++)
        {
            if(lucky(i)==1&&in%i==0)
            {
                flag=1;
            }
        }
        if(flag==1)
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