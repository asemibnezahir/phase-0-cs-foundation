#include<stdio.h>
long long int fac(int in,int initia)
{
    if(initia==in+1)
    {
        return 1;
    }
    long long int mul=fac(in,initia+1);
    return mul*initia;
}
int main()
{
    int in;
    scanf("%d",&in);
    long long int ans=fac(in,1);
    printf("%lld",ans);
    return 0;
}