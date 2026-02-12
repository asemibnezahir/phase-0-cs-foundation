#include<stdio.h>
int main()
{
    char alpha;
    scanf("%c",&alpha);
    if(alpha>=65&&alpha<=90)
    {
        printf("ALPHA\nIS CAPITAL");
    }

    else if(alpha>=97&&alpha<=122)
    {
        printf("ALPHA\nIS SMALL");
    }

    else if(alpha>=48&&alpha<=57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}