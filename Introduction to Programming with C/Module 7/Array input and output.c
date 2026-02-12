#include<stdio.h>
int main()
{
    //When We Use Normal Variable for input & output....
    /* 
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("%d %d %d %d %d",a,b,c,d,e); 
    */



    //When We Use Array with Loop for input & output.....
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    //True Power of Array!!

    return 0;
}