#include<stdio.h>
int main()
{
    int uppercase,lowercase;
    char test;
    scanf("%c",&test);
    uppercase=test+32;
    lowercase=test-32;
    if(test>=65&&test<=90)
    {
        printf("%c",uppercase);
    }
    else if(test>=97&&test<=122)
    {
        printf("%c",lowercase);
    }
    else
    {
        printf("Not Valid");
    }
    return 0;
}