#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int A[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]<=10)
        {
            printf("A[%d] = %d\n",i,A[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}

//Accepted in Codeforces....