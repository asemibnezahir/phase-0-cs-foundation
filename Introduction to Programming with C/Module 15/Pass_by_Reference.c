#include<stdio.h>
void fun(int* p) //pointer for storing address
{
    *p=20;//Dereferencing & value changing

    // printf("fun function's x address: %p\n",&x);
}
int main()
{
    int x=10;
    fun(&x); //Passing Address, not value
    printf("%d\n",x);//
    // printf("main function's x address: %p\n",&x);
    return 0;
}
//successfully changed main function's "x" value by calling with "x" address