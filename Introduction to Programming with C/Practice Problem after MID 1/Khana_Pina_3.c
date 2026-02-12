#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    for(int i=1;i<=money;i++)
    {
        if(i%3==0)
        {
            printf("%d Yes\n",i);
        }
        else if(i%5==0)
        {
            printf("%d Yes\n",i);
        }
        else
        {
            printf("%d No\n",i);
        }
    }
    return 0;
}