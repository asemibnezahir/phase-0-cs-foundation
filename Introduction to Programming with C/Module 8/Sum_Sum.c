#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int gi[n];
    int sum_sum=0;
    int sub_sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&gi[i]);
        if(gi[i]>0)
        {
            sum_sum+=gi[i];
        }
        else if(gi[i]<0)
        {
            sub_sum+=gi[i];
        }
        
    }
    printf("%d %d",sum_sum,sub_sum);
    return 0;
}