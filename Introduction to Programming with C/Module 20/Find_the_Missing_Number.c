#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        long long int M,A,B,C;
        scanf("%lld %lld %lld %lld",&M,&A,&B,&C);
        long long int mul=A*B*C;
        long long int D=M/mul;
        if(mul==0)
        {
            if(M==0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            if(M%mul!=0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%lld\n",D);
            }
        }
    }
    return 0;
}