#include<stdio.h>
#include<string.h>
int main()
{
    char as[100001];
    fgets(as,100001,stdin);
    for(int i=0;as[i]!='\0';i++)
    {
        if(as[i]>=97&&as[i]<=122)
        {
            as[i]-=32;
            printf("%c",as[i]);
        }
        else if(as[i]>=65&&as[i]<=90)
        {
            as[i]+=32;
            printf("%c",as[i]);
        }
        if(as[i]==',')
        {
            as[i]=32;
            printf("%c",as[i]);
        }
    }
    return 0;
}