#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    int gi[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&gi[i]);
    }
    int ind,inp;
    scanf("%d %d",&ind,&inp);
    gi[ind]=inp;
    for(int i=in-1;i>=0;i--)
    {
        printf("%d ",gi[i]);
    }
    return 0;
}