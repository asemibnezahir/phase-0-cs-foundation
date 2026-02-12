#include<stdio.h>
int my_abs(int* p)
{
    if(*p<0)
    {
        *p*=-1;
    }
    else
    {
        *p=*p;
    }
    return *p;
} 
int main()
{
    int in;
    scanf("%d",&in);
    my_abs(&in);
    printf("%d",in);
    return 0;
}