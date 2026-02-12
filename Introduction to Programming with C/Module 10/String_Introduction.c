#include<stdio.h>
int main()
{
    //এককথায় char data Type এর Array কেই String বলে।।  
    char as[5];
    for(int i=0;i<5;i++)
    {
        scanf("%c",&as[i]);
        printf("%c\n",as[i]);
    }
    return 0;
    /* 
    বিঃদ্রঃ String এর Input দেওয়ার সময় Input গুলোর মধ্যে Space দেওয়া যাবেনা কারণ,
    char Data Type-এ Space-কেও একটা Character হিসেবে ধরা হয়, ফলে Space দিলে সে 
    ঐ Space-কেই Index-এর ভিতরে Store করে রাখে এবং Space-কেই Print করে দেয়।  
    */
}