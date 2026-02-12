#include<stdio.h>
int main()
{
    int A,C;
    long long int B,D,mul1,mul2,final;
    scanf("%d %lld %d %lld",&A,&B,&C,&D);
    mul1=A*B; mul2=C*D;
    final=mul1-mul2;
    printf("Difference = %lld",final);
    return 0;
}