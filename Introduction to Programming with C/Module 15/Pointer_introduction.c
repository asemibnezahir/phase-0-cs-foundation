#include<stdio.h>
int main()
{
    /*
    আমরা কোনো ভেরিয়েবল ডিক্লিয়ার করলে তা স্টেক মেমোরিতে কোনো একটা জায়গা
    দখল করে, ঐ জায়গাটার একটা এড্রেস থাকে, আমরা যদি ঐ এড্রেস নিয়ে কাজ করতে
    চাই তাহুলে আমাদেরকে বুঝতে হবে যে পয়েন্টার কি??
    */

    /*
    কোনো একটি ভেরিয়েবলের এড্রেসকে যে ভেরিয়েবলে স্টোর করা বা রাখা যায়, তাকে
    পয়েন্টার ভেরিয়েবল বলে।
    */

    /*
    কোনো ভেরিয়েবলের এড্রেস সরাসরি প্রিন্ট করার Syntax:
    int variable_name;
    printf("%p",&variable_name);
    */

    /*
    কোনো ভেরিয়েবলের এড্রেস অন্য ভেরিয়েবল বা পয়েন্টার ভেরিয়েবলে নেয়ার syntax:
    Data_Type_of_Variable * Pointer_Variable_Name;
    printf("%p",pointer_variable_name); to print a pointer variable value
    */
    
    int var=10; //"Var" is a normal integer variable
    printf("%d\n",var); //Printing the value stored in "var"
    printf("%p\n",&var); //Printing the address of "var" in stake memory
    //"%p" is format specifier to print address and must use "&" before the name

    int* ptr; //Declaring a pointer varible
    ptr=&var; //Storing Address of var in "ptr" pointer variable
    printf("%p",ptr); //Printing the Pointer Variable Value

    /*
    আমরা এই নিয়মে পয়েন্টার ভেরিয়েবলের এড্রেসও স্টোর এবং প্রিন্ট করতে পারি।
    */
    return 0;
}