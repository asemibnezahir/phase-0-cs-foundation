#include<stdio.h>
#include<string.h>
int main()
{
    char A[21],B[11],C[11];
    scanf("%s %s",&A,&B);
    printf("%d %d\n",strlen(A),strlen(B));
    strcpy(C,A);
    strcat(A,B);
    printf("%s\n",A);
    strcpy(A,C);
    int temp=A[0];
    A[0]=B[0];
    B[0]=temp;
    printf("%s %s",A,B);
    return 0;
}