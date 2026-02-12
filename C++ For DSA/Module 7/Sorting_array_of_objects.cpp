#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};


/*
কম্পেয়ার ফাংশনের বৈশিষ্ট্যঃ
    ১.রিটার্ন টাইপ bool হয় যার কারণে সবসময় true অথবা flase রিটার্ন করে।
    ২.প্যারামিটারে দুইটা অব্জেক্ট নেওয়া হয় যেখানে সর্ট ফাংশনে দেয়া এরে অব্জেক্ট থেকে প্রত্যেকবার
        দুইটা করে অব্জেক্টকে পাঠানো হয়।
    ৩.ফাংশনের ভিতরে কীসের মাধ্যমে সর্ট করতে তার প্যারামিটারকে কন্ডিশনে দেয়া হয়।
    ৪.কন্ডিশন ঠিক হলে ট্রু রিটার্ন করে, ফলে সর্ট ফাংশন বুঝে যে দুইটার মধ্যে এলাইন ঠিকাছে আর
        কন্ডিশন ঠিক না হলে ফলস রিটার্ন করে ফলে সর্ট ফাংশন বুঝে এলাইন ঠিক নেই তাদের এলাইন
        ঠিক করে নেয়।
    ৫. এভাবে বারবার দুইটা করে অব্জেক্টকে পাঠিয়ে সবগুলো অব্জেক্টের এলাইন ঠিক করে কন্ডিশন অনুযায়ী।
*/

//For Ascending
bool cmp(Student l,Student r) //Declared Compare function
{
    if(l.marks<r.marks) //mark as sorting parameter with condition smaller in left
    { 
        return true; //if align is right
    }
    else
    {
        return false; //if align is wrong
    }
}

//For descending
bool cbt(Student l,Student r) //Declared Compare function 
{
    if(l.marks>r.marks) //mark as sorting parameter with condition greater in left
    {
        return true; //if align is right
    }
    else
    {
        return false; //if align is wrong
    }
}

//Again Ascending with shortcut compare
bool srt(Student l,Student r)
{
   return l.marks<r.marks; //return true_condition;
}
int main()
{
    int in;
    cin>>in; 
    Student s[in];

    for(int i=0;i<in;i++)
    {
        cin>>s[i].name;
        cin>>s[i].roll;
        cin>>s[i].marks;
    }
    /*
    অব্জেক্টের এরে সর্ট করতে শুধু স্টার্টিং এবং এন্ডিং দিলে সর্ট ফাংশন বুঝেনা তাকে কীসের ভিত্তিতে 
    সর্ট করতে হবে তাই এদের পাশাপাশি একটা কম্পেয়ার ফাংশন দিতে এড করতে হবে কমা দিয়ে এবং
    ঐ ফাংশনটাকে কোড করে রেডি করতে হবে, এর মধ্যেই বলতে হবে কীসের ভিত্তিতে কোন অর্ডারে 
    সর্ট করতে চাচ্ছি।
    */

    
    cout<<endl;
    
    //sorting Ascending Order
    sort(s,s+in,cmp);//here cmp is taken as compare function
    for(int i=0;i<in;i++) 
    {
        cout<<s[i].name<<" ";
        cout<<s[i].roll<<" ";
        cout<<s[i].marks;
        cout<<endl;
    }

    cout<<endl;

    //sorting Descending Order
    sort(s,s+in,cbt);//here cbt is taken as compare function
    for(int i=0;i<in;i++) 
    {
        cout<<s[i].name<<" ";
        cout<<s[i].roll<<" ";
        cout<<s[i].marks;
        cout<<endl;
    }
    cout<<endl;


    //again ascending with shortcut
    sort(s,s+in,srt);//here srt is taken as compare function
    for(int i=0;i<in;i++) 
    {
        cout<<s[i].name<<" ";
        cout<<s[i].roll<<" ";
        cout<<s[i].marks;
        cout<<endl;
    }
    return 0;
}