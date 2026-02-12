#include<stdio.h>
int req(char s[],int in)
{
    if(s[in]=='\0')
    {
        return 0;
    }
    int cnt=req(s,in+1);
    return cnt+1;
}
int main()
{
    char s[201];
    fgets(s,201,stdin);
    int ans=req(s,0);
    printf("%d",ans);
    return 0;
}