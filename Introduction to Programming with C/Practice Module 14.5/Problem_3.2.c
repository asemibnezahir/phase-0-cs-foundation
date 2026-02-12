//With Return + No Parameter
#include<stdio.h>
int char_to_ascii()
{
    char in;
    scanf("%c",&in);
    return in;
}
int main()
{
    int value=char_to_ascii();
    printf("%d",value);
    return 0;
}