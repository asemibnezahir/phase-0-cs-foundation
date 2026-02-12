#include<stdio.h>
#include<string.h>
char A[10000001];
int main()
{
    scanf("%s",&A);
    int Alen=strlen(A);
    int count[26]={0};
    for(int i=0;i<Alen;i++)
    {
        int val=A[i]-97;
        count[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==0)
        {
            continue;
        }
        printf("%c : %d\n",i+97,count[i]);
    }
    return 0;
}