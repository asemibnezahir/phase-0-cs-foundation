#include<stdio.h>
int main()
{
    int b; //This is Variable Declaration.
    int d=10; //This is Variable Declaration & Initialization.
    int c[5]; //This is Array Declaration.
    int a[5]={10,0,0,0,0}; //This is Array Declaration & Initialization.
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    /* যদি আমরা Array Declare করে Initialize না করি তাহলে এরের মধ্যেও Gurvage Value 
    add হয়ে থাকে, কিন্তু আমরা যখন এই উপরক্ত পদ্ধতিতে Array Initialize করি তখন 
    যদি Just Array এর একটা Value-ই Declare করি বাকি Value-গুলো এমনিতেই Zero হয়ে 
    যাবে Declare না করলেও, আর Gurvage দেখাবেনা। 
    Note!!  এটি শুধুমাত্র Array Size Declare করা থাকলেই হবে নাহলে হবেনা।*/

    return 0;
}