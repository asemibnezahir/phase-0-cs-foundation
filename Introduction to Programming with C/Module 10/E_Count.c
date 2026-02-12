#include<stdio.h>
#include<string.h>
int main()
{
    char as[1000001];
    scanf("%s",&as);
    int length=strlen(as);
    int sum=0;
    for(int i=0;i<length;i++)
    {
        // as[i]=as[i]-48; Method 1
        // as[i]=as[i]-'0'; Method 2

        //Method 3
        sum+=as[i]-'0';
    }
    printf("%d",sum);
    return 0;
}