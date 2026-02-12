#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=12;i++)
    {
        int mul;
        mul=num1*i;
        printf("%d * %d = %d\n",num1,i,mul);
    }
    return 0;
}