#include<stdio.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    int Blen=strlen(B);
    for(int i=0;i<=Blen;i++)
    {
        A[i]=B[i];
    }
    printf("%s %s",A,B);
    return 0;
}