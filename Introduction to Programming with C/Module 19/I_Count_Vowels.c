#include<stdio.h>
int vowel(char st[],int in)
{
    if(st[in]=='\0')
    {
        return 0;
    }
    int cnt=vowel(st,in+1);
    if(st[in]=='A'||st[in]=='a'||st[in]=='E'||st[in]=='e'||st[in]=='I'||st[in]=='i'||st[in]=='O'||st[in]=='o'||st[in]=='U'||st[in]=='u')
    {
        return cnt+1;
    }
    else
    {
        return cnt;
    }
}
int main()
{
    char st[201];
    fgets(st,201,stdin);
    int ans=vowel(st,0);
    printf("%d",ans);
    return 0;
}