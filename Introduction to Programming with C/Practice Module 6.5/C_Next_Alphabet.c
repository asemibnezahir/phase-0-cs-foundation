#include<stdio.h>
int main()
{
    char in,out;
    scanf("%c",&in);
    if(in<122)
    {
        out=in+1;
        printf("%c",out);
    }
    else if(in==122)
    {
        printf("a");
    }
    else
    {
        printf("Not mentioned");
    }
    return 0;
}