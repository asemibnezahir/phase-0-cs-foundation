#include<stdio.h>
void num(int i)
{
    if(i==0) //end condition
    {
        return;
    }
    printf("%d ",i);
    num(i-1); //encryment or decryment
}
int main()
{
    int in;
    scanf("%d",&in);
    num(in); //initialization
    return 0;
}