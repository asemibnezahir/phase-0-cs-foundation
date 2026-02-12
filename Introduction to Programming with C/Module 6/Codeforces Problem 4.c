#include<stdio.h>
#include<limits.h>
int main()
{
    int X;
    scanf("%d",&X);
    int max=INT_MIN;
    for(int i=1;i<=X;i++)
    {
        int num;
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
    }
    printf("%d",max);
    return 0;
}