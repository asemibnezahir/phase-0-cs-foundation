#include<stdio.h>
int main()
{
    //Show the power of string
    /* 
    আমরা String এর Input নিয়ে নিতে পারি ১বার Scanf Use করেই
    কোনোপ্রকার Loop চালানো ছাড়া। শুধু Format Specifier এর জায়গায়
    %c এর বদলে %s দিতে হয়। আর Comma(,) দিয়ে String Name বলে দিতে হয়।
    Output বা Print করার ক্ষেত্রেও Same.
    */
    char s[10];
    scanf("%s",&s);
    printf("%s",s);
    return 0;
}