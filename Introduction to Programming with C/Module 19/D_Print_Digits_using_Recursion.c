#include<stdio.h>
void req(int n)
{
    if(n==0)
    {
        return;
    }
    req(n/10);
    int last=n%10;
    printf("%d ",last);
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0");
        }
        req(n);
        printf("\n");
    }
    return 0;
}