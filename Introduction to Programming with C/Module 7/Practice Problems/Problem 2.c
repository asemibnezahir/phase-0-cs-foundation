#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int odd=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    printf("%d",odd);
    return 0;
}