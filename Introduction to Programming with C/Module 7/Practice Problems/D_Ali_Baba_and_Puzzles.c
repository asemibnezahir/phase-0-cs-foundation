#include<stdio.h>
int main()
{
    long long int in[4];
    for(int i=0;i<4;i++)
    {
        scanf("%lld",&in[i]);
    }
    long long int arr[6];

    arr[0]=in[0]+in[1]-in[2];
    arr[1]=in[0]-in[1]+in[2];
    arr[2]=in[0]*in[1]+in[2];
    arr[3]=in[0]*in[1]-in[2];
    arr[4]=in[0]+in[1]*in[2];
    arr[5]=in[0]-in[1]*in[2];

    for(int i=0;i<6;i++)
    {
        if(arr[i]==in[3])
        {
            printf("YES");
            return 0;
        }
        
    }
    printf("NO");
    return 0;
}