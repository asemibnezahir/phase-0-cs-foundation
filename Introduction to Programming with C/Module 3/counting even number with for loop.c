#include<stdio.h>
int main()
{
    for(int i=0; i<1001; i=i+2)
    {
        printf("%d\n",i);
    }


    for (int j = 4; j < 1001; j=j+4)
    {
        printf("%d\n",j);   //counting gunitok of 4 in 1000
    }
    
    return 0;
}