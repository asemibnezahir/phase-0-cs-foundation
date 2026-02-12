//Solve from class

//Lexicographical Comparisom manually

/* 
#include<stdio.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    int i=0;
    while(1)
    {
        if(A[i]=='\0'&&B[i]=='\0')
        {
            printf("Equal");
            break;
        }
        else if(A[i]=='\0')
        {
            printf("A is Smaller");
            break;
        }
        else if(B[i]=='\0')
        {
            printf("B is Smaller");
            break;
        }
        else if(A[i]<B[i])
        {
            printf("A is Smaller");
            break;
        }
        else if(A[i]>B[i])
        {
            printf("B is Smaller");
            break;
        }
        else if(A[i]==B[i])
        {
            i++;
        }
    }

    return 0;
}
*/

//String Lexicographical Comparisom with Built-in Function
#include<stdio.h>
#include<string.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    int value=strcmp(A,B);
    if(value<0)
    {
        printf("A is Smaller");
    }
    else if(value>0)
    {
        printf("B is Smaller");
    }
    else if(value==0)
    {
        printf("Equal");
    }
    return 0;
}

//"strcmp" fuction Syntax:
// strcpy(1st String,2nd String);
//If 1st String is Smaller then, strcmp value is Negative number.
//If 2nd is Smaller then, strcmp value is Positive number.
//If Two Strings are equal then, strcmp value is Zero.
