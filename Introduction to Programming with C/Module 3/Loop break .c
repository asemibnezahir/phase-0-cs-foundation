#include<stdio.h>
int main()
{
    for(int i=1 ; i<=10; i++)
    {
        if(i==5)
        {
            break; //break stops the loop when break comes in loop
        }
        printf("%d\n",i);
    }
    return 0;
}