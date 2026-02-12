//String Copy manually

/* 
#include<stdio.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    int length=strlen(B);
    for(int i=0;i<=length;i++)
    {
        A[i]=B[i];
    }
    printf("%s %s",A,B);
    return 0;
} 
*/

//String Copy with Built-in Function
#include<stdio.h>
#include<string.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    strcpy(A,B);//That Means I want to copy B String & Paste in A String........
    printf("%s %s",A,B);
    return 0;
}

//"strcpy" fuction Syntax:
// strcpy(where i want to copy,which i want to copy);