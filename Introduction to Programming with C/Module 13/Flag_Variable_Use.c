#include<stdio.h>
int main()
{
    int in,x;
    scanf("%d",&in);
    int arr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int flag=0; //প্রথমে ফ্ল্যাগ নামে ভেরিয়েবল নিয়ে ইচ্ছামতো একটা ভ্যালু এসাইন করে দিলাম।
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("YES\n");
                printf("%d %d\n",arr[i],arr[j]);
                flag=1; //লজিক সত্যি হলেই ফ্ল্যাগ এর ভ্যালু আগেরটা চেঞ্জ করে দিলাম।
            }
        }
    }
    if(flag==0)
    {
        printf("NO"); //ফ্ল্যাগের ভ্যালু দিয়ে লজিক দিলাম,ফ্ল্যাগের ভ্যালু চেঞ্জ না হলেই NO Print করবে।
    }
    return 0;
}