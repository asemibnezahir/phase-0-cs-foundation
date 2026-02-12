#include<stdio.h>
void odd_even()
{
    int in;
    scanf("%d",&in);
    int arr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<in;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    printf("%d %d",even,odd);
}


int main()
{
    odd_even();
    return 0;
}