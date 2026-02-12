#include<stdio.h>
int main()
{
    char as[1000001];
    fgets(as,1000001,stdin);

    //Method 1

    // for(int i=0;i<=1000001;i++)
    // {
    //     if(as[i]=='\\')
    //     {
    //         break;
    //     }
    //     printf("%c",as[i]);
    // }

    //Method 2
    for(int i=0;as[i]!='\\';i++)
    {
        printf("%c",as[i]);
    }
    return 0;
}