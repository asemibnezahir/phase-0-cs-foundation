#include<stdio.h>
#include<string.h>
int main()
{
    char as[1001];
    scanf("%s",&as);
    int length=strlen(as);
    for(int i=0,j=length;i<j;i++,j--)
    {
        if(as[i]!=as[j-1])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}