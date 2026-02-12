#include<stdio.h>
#include<limits.h>
int main()
{
    int in;
    scanf("%d",&in);
    int salami[in];
    int max=INT_MIN;
    for(int i=0;i<in;i++)
    {
        scanf("%d",&salami[i]);
        if(salami[i]>max)
        {
            max=salami[i];
        }
    }
    for(int i=0;i<in;i++)
    {
        printf("%d ",max-salami[i]);
    }
    return 0;
}