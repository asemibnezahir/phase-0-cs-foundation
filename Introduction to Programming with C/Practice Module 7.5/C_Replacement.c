#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int gi[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&gi[i]);
        if(gi[i]>0)
        {
            printf("1 ");
        }
        else if(gi[i]<0)
        {
            printf("2 ");
        }
        else
        {
            printf("0 ");
        }
    }
    return 0;
}

//Accepted in Codeforces....