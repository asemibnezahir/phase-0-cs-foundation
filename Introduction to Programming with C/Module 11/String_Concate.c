//String Concat manually

/* 
#include<stdio.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    int Aleng=strlen(A);
    int Bleng=strlen(B);
    for(int i=Aleng,j=0;j<=Bleng;i++,j++)
    {
        A[i]=B[j];
    }
    printf("%s %s",A,B);
    return 0;
} 
*/

//String Concat with Built-in Function
#include<stdio.h>
#include<string.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    strcat(A,B); //That Means I want to concate B String into A String........
    printf("%s %s",A,B);
    return 0;
}

//"strcat" fuction Syntax:
// strcat(where i want to concat,which i want to concat);
//strcat(A,B); means A=A+B;
//strcat(B,A); means B=B+A;