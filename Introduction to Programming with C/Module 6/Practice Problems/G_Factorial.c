#include<stdio.h>
int main()
{
    long long int num;
    scanf("%lld\n",&num);
    for(long long int i=1;i<=num;i++)
    {
        long long int in,sum=1;
        scanf("%lld",&in);
        for(long long int j=in;j<=in&&j>=1;j--)
        {
            long long int num1,num2,mul1;
            num1=j;
            j--;
            if(j==0)
            {
                break;
            }
            num2=j;
            mul1=num1*num2;
            sum=sum*mul1;
        }
        printf("%lld\n",sum);
        
    }
    return 0;
}