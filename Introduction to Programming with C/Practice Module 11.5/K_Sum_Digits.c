#include<stdio.h>
#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    char arr[in+1];
    scanf("%s",&arr);
    int ch_to_d;
    int sum=0;
    for(int i=0;i<in;i++)
    {
        ch_to_d=arr[i]-48;
        sum+=ch_to_d;  
    }
    printf("%d",sum);
    return 0;
}