#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    //Declaring Constractor
    Student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }
};
int main()
{
    //Method without constractor
    // Student rahim();
    // rahim.roll=45;
    // rahim.cls=5;
    // rahim.gpa=3.28;
    // cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;

    /*
        এভাবে একটি অব্জেক্টে প্রত্যেকটা ভেরিয়েলের আলাদা আলাদা ইনপুট দেয়া কষ্টসাধ্য,
        এই কাজটিকে শর্টকাটে করার জন্যে Constractor ইউজ করা হয়।
    */


   /*
        Constractor একধরনের বিশেষ ফাংশন, এর স্পেশাল তিনটি বৈশিষ্ট্য হলোঃ
            ১. এটি সবসময় class এর ভিতরে নেওয়া হয়।
            ২. এর কোনো Return Type থাকেনা, এমনকি void-ও না।
            ৩. ফাংশনটির নাম যেই class এর ভিতরে আছে সেই ক্লাসের নামের হুবহু নাম হবে।
   */

   //Method with constractor
    Student karim(45,5,3.28);
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
    return 0;
}