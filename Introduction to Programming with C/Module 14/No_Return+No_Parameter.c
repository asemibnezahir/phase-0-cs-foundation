#include<stdio.h>

void sum() 
{
    int a,b;
    scanf("%d %d",&a,&b);   //Taking input & printing output 
    int ans=a+b;            //Everything has done by sum function
    printf("%d",ans);
}
int main()
{
    
    sum(); //Just Calling Sum Function
    return 0;
} 