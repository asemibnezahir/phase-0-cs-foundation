#include<stdio.h>
int main()
{
    /*Syntax of "for loop"
     for(variable  initialaization;condition;encryment/decryment)
     {
        statement;
     }

     initialization means loop starting point.
    condition means loop ending condition.
    encryment/decryment means loop running steps, 
    knowing actually when the ending condition applied.
    */
    for(int i=1; i<101; i++) //i++ means i+1.
    {
        printf("Run 100 times\n");
    }
    return 0;
}