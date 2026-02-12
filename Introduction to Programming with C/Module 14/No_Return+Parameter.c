#include<stdio.h>

void sum(int a,int b) //কোনোকিছু Return না করলে Return_Type "Void" দিতে হবে।
{
    int ans=a+b;
    printf("%d",ans);//যেহেতু Return করছিনা তাই Return এর পরের কাজ এই ফাংশনেই করতে হবে।
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b); //ভ্যালু যেহেতু ফাংশনের ভিতরেই প্রিন্ট হয়ে যাচ্ছে তাই এখানে কোনো ভেরিয়েবল নিয়ে ভ্যালু স্টোর করার প্রয়োজন নেই।
    return 0;
} 