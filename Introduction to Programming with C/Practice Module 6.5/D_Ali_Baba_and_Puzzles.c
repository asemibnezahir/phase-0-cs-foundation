// #include<stdio.h>
// int main()
// {
//     long long int a,b,c,out;
//     scanf("%lld %lld %lld %lld",&a,&b,&c,&out);
//     if(a+b-c==out)
//     {
//         printf("YES");
//     }
//     else if(a-b+c==out)
//     {
//         printf("YES");
//     }
//     else if(a*b+c==out)
//     {
//         printf("YES");
//     }
//     else if(a*b-c==out)
//     {
//         printf("YES");
//     }
//     else if(a+b*c==out)
//     {
//         printf("YES");
//     }
//     else if(a-b*c==out)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }




//Same Method with array

// #include<stdio.h>
// int main()
// {
//     long long int in[4];
//     for(int i=0;i<4;i++)
//     {
//         scanf("%lld",&in[i]);
//     }
//     int arr[6];

//     arr[0]=in[0]+in[1]-in[2];
//     arr[1]=in[0]-in[1]+in[2];
//     arr[2]=in[0]*in[1]+in[2];
//     arr[3]=in[0]*in[1]-in[2];
//     arr[4]=in[0]+in[1]*in[2];
//     arr[5]=in[0]-in[1]*in[2];
//     if(arr[0]!=in[3]&&arr[1]!=in[3]&&arr[2]!=in[3]&&arr[3]!=in[3]&&arr[4]!=in[3]&&arr[5]!=in[3])
//     {
//         printf("NO");
//     }
//     else
//     {
//         printf("YES");
//     }
//     return 0;
 
// }


//Shortcut with array booommm


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

    for(int i=1;i<6;i++)
    {
        if(arr[1]==in[3])
        {
            printf("YES");
            return 0;
        }
        
    }
    printf("NO");
    return 0;
}

