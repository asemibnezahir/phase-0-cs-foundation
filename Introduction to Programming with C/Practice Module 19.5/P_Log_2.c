#include<stdio.h>
int logi(long long int in,int i)
{
    if(in==1)
    {
        return i;
    }
    return logi(in/2,i+1);
}
int main()
{
    long long int in;
    scanf("%lld",&in);
    int ans=logi(in,0);
    printf("%d",ans);
    return 0;
}