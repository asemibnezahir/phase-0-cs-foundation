#include<stdio.h>

void fun(char st[]/*,int si*/) //we don't need size in string because we have build in function strlen 
{
    printf("%s",st);
}

int main()
{
    char st[6];
    scanf("%s",/*&*/st);//Don't need in string
    fun(st/*,10*/); //described upperside
    return 0;
}