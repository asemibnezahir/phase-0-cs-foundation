#include<stdio.h>
void fun(int x)
{
    x=20;
    printf("fun function's x address: %p\n",&x);
}
int main()
{
    int x=10;
    fun(x);
    // printf("%d\n",x);
    printf("main function's x address: %p\n",&x);
    return 0;
}
//শুধু ভ্যালুই fun ফাংশনে পাস হয় দেখে মেইন ফাংশনে "x" এর ভ্যালু চেঞ্জ হয়না।
