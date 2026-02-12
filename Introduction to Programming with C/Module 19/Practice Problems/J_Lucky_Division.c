#include<stdio.h>
int lucky(int in)
{
    for(int i=1;in!=0;i++)
    {
        int last=in%10;
        in/=10;
        if(last!=4&&last!=7)
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