#include<stdio.h>
int main()
{
    long long int a,b,sum,mul,sub;
    scanf("%lld %lld",&a,&b);
    sum=a+b;
    mul=a*b;
    sub=a-b;
    printf("%lld + %lld = %lld\n%lld * %lld = %lld\n%lld - %lld = %lld",a,b,sum,a,b,mul,a,b,sub);
    return 0;
}