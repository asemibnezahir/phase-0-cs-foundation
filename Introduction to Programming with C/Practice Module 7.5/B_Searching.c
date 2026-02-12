#include<stdio.h>
int main()
{
    int n,gi;
    scanf("%d",&n);
    int as[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&as[i]);
    }
    scanf("%d",&gi);
    for(int i=0;i<n;i++)
    {
        if(gi==as[i])
        {
            printf("%d",i);
            return 0;
        }
    }

    printf("-1");
    
    return 0;
}
//Accepted in Codeforces....