#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int A[a];
    int B[b];
    for (int i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
    }
    int C[a+b];
    for(int i=0,j=0;i<a+b;i++)
    {
        if(i<a)
        {
            C[i]=A[i];
        }
        else if(i>=a)
        {
            C[i]=B[j];
            j++;
        }
    }
    for (int i=0;i<a+b;i++)
    {
        printf("%d ",C[i]);
    }
    return 0;
}