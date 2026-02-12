#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int as[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&as[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(as[i]!=as[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}