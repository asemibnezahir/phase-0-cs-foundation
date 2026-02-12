#include<stdio.h>
#include<string.h>
int main()
{
    char as[1001];
    char gi[1001];
    scanf("%s %s",&as,&gi);
    int length_1=strlen(as);
    int length_2=strlen(gi);
    printf("%d %d\n%s %s",length_1,length_2,as,gi);
    return 0;
}