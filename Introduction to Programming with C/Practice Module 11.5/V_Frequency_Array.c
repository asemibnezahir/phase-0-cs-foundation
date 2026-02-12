#include<stdio.h>
int main()
{
    int in,store;
    scanf("%d %d",&in,&store);
    int arr[in];
    int freq[store+1];
    for(int i=0;i<=store;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<in;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=1;i<=store;i++)
    {
        printf("%d\n",freq[i]);
    }
    return 0;
}