#include<stdio.h>
#include<limits.h>
int main()
{
    int in;
    scanf("%d",&in);
    int gi[in];
    int min=INT_MAX;
    for(int i=0;i<in;i++)
    {
        scanf("%d",&gi[i]);
        if(gi[i]<min)
        {
            min=gi[i];
        }
    }
    printf("%d ",min);
    for(int i=0;i<in;i++)
    {
        if(min==gi[i])
        {
            printf("%d ",i+1);
            break;
        }
    }
    return 0;
}
//Accepted in Codeforces....