//With Return + Parameter
#include<stdio.h>
int char_to_ascii(char in)
{
    return in;
}
int main()
{
    char in;
    scanf("%c",&in);
    int val=char_to_ascii(in);
    printf("%d",val);
    return 0;
}