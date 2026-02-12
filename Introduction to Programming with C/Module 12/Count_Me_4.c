#include<stdio.h>
#include<string.h>
int main()
{
    char in[10001];
    scanf("%s",&in);
    int Alen=strlen(in);
    int count[26]={0};
    for(int i=0;i<Alen;i++)
    {
        int val=in[i]-97;
        count[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==0)
        {
            continue;
        }
        printf("%c - %d\n",i+97,count[i]);
    }
    return 0;
}