#include<stdio.h>
int main()
{
    for(int i=1;i<10000;i++)
    {
        int X;
        scanf("%d",&X);
        if(X==1999)
        {
            printf("Correct\n");
            break;
            
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}