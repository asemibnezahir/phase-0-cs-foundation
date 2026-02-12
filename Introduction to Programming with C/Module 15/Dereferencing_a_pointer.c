/* 
পয়েন্টার ভেরিয়েবল মেমোরিতে ৮বাইট জায়গা দখল করে(পিসি ৬৪ বিট হলে)
আমরা যদি পয়েন্টারের ভিতরে থাকা এড্রেসকে প্রিন্ট না করে ঐ স্টোর থাকা এড্রেসে গিয়ে
ঐ এড্রেসে থাকা ভ্যালুকে প্রিন্ট করি তাকে পয়েন্টার ডিরেফারেন্সিং বলে।
*/

/*
Syntax of pointer dereferencing:
printf("%d",*pointer_name); Just pointer name এর আগে (*) সাইন দিতে হয় আর
ফরম্যাট স্পেসিফায়ার চেঞ্জ করতে হয়। 
*/
#include<stdio.h>
int main()
{
    int val=10;
    printf("%d\n",val);
    int* point;
    point=&val;
    printf("%p\n",point);
    printf("%d\n",*point);

    /*
    ডিরেফারেন্স করে এড্রেস করা ভেরিয়েবলের ভ্যালুও চেঞ্জ করা যায়। 
    */
    *point=200;
    printf("%d\n",val);
    return 0;
}