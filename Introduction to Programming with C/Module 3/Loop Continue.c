#include<stdio.h>
int main()
{
    for(int i=1 ; i<=10; i++)
    {
        if(i==5)
        {
            continue; //continue skips the loop only for one step and continues from next step.
        }
        printf("%d\n",i);
    }
    return 0;
}