#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    int _4digit,_3digit,_2digit;
    _4digit=A/1000;
    _3digit=A/100;
    _2digit=A/10;


    if(A>=999)
    {
        if(_4digit%2==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }


    else if(A>=99)
    {
        if(_3digit%2==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }


    else if(A>=9)
    {
        if(_2digit%2==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }


    else
    {
        if(A%2==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    return 0;
}