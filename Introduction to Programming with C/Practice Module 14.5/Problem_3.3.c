//No Return + Parameter
#include<stdio.h>
void char_to_ascii(int in)
{
    printf("%d",in);
}
int main()
{
    char input;
    scanf("%c",&input);
    char_to_ascii(input);
    return 0;
}