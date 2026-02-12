#include<stdio.h>
#include<string.h>
int main()
{
    //To Count String length, The function is "strlen", It can be stored in a variable.
    //Syntax is:
    //int Variable_Name=strlen(String_Name);
    //We also can Print it directly,
    //Syntax is:
    //printf("%d",strlen(String_Name));
    char as[100];
    scanf("%s",&as);
    int count=strlen(as);
    printf("%d",count);
    return 0;
}