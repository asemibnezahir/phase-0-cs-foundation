#include<stdio.h>
void Mello()
{
    printf("Mello\n");
}
void Gello()
{
    printf("Gello\n");
    Mello();
}
void Hello()
{
    printf("Hello\n");
    Gello();
}
int main()
{
    printf("Hi\n");
    Hello();
    return 0;
}
