#include<stdio.h>
char small_to_capital(char in)
{
    in-=32;
    return in;
}
int main()
{
    char a;
    scanf("%c",&a);
    char val=small_to_capital(a);
    printf("%c",val);
    return 0;
}