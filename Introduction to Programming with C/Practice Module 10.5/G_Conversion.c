#include<stdio.h>
#include<string.h>
int main()
{
    char st[100001];
    fgets(st,100001,stdin);
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]>=65&&st[i]<=90)
        {
            st[i]+=32;
            printf("%c",st[i]);
        }
        else if(st[i]>=97&&st[i]<=122)
        {
            st[i]-=32;
            printf("%c",st[i]);
        }
        else if(st[i]==',')
        {
            st[i]=32;
            printf("%c",st[i]);
        }
    }
    return 0;
}