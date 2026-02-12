#include<stdio.h>
#include<string.h>
int main()
{
    char A[21],B[21];
    scanf("%s %s",&A,&B);
    int C=strcmp(A,B);
    if(C<0)
    {
        printf("%s",A);
    }
    else if(C>0)
    {
        printf("%s",B);
    }
    else
    {
        printf("%s",A);
    }
    return 0;
}