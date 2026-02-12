#include<stdio.h>
#include<string.h>
int main()
{
    char st[1001];
    scanf("%s",&st);
    int length=strlen(st);
    for(int i=0,j=length-1;i<j;i++,j--)
    {
        if(st[i]!=st[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}