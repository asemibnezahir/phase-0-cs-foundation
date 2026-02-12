#include<stdio.h>
char capital_to_small(char in)
{
    in+=32;
    return in;
}
int main()
{
    char input;
    scanf("%c",&input);
    char value=capital_to_small(input);
    printf("%c",value);
    return 0;
}