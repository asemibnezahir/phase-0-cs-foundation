#include<stdio.h>

int sum()
{
    int a,b;
    scanf("%d %d",&a,&b); //ইনপুট বা ভ্যালু এসাইন ফাংশনের মধ্যেই করতে হবে। 
    int ans=a+b;
    return ans;
}

int main()
{
    int val=sum();
    int val2=sum();
    printf("%d %d",val,val2);
    return 0;
}
