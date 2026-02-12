/*
Return_Type Fuction_Name(Parameters)
{
    code here;
    return ;
}
*/

#include<stdio.h>

int sum(int num1,int num2)
{
    int ans=num1+num2;
    return ans;
}
int sub(int num1,int num2)
{
    int ans=num1-num2;
    return ans;
}

int main()
{
    int val=sum(10,5);
    int val2=sum(100,200);
    int val3=sum(4,7);
    int val4=sub(10,5);
    printf("%d %d %d %d",val,val2,val3,val4);
    return 0;
}
