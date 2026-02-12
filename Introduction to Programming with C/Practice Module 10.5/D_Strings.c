#include<stdio.h>
#include<string.h>
int main()
{
    char A[11];
    char B[11];
    scanf("%s %s",&A,&B);
    int len_A=strlen(A),len_B=strlen(B);
    printf("%d %d\n",len_A,len_B);
    printf("%s%s\n",A,B);
    int temp=A[0];
    A[0]=B[0];
    B[0]=temp;
    printf("%s %s",A,B);
    return 0;
}