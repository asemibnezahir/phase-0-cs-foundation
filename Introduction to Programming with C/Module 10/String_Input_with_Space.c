#include<stdio.h>
int main()
{
   /*  
    String Input-এ "Scanf" এর মাধ্যমে করা Space-কে Input নেওয়া ত যায়-ইনা 
    উলটা আরো Space-এর পরে কিছু থাকলে সেটাও Input নেয়না। এই সমস্যা সমাধানের 
    জন্যে String Input নেওয়ার সময় "Scanf" এর বদলে "gets" বা "fgets" এদের যেকোনো 
    একটা ব্যাবহার করা হয়। উল্লেখ্য এদের মধ্যে "fgets" ব্যাবহার করাটা Standard, যদিও 
    "gets" ব্যবহার করাটা সহজ। 
    */


    /* 
    "gets" এর Input নেওয়ার Syntax:
    gets(String_Name); 
    */

//    char as[15];
//    gets(as);
//    printf("%s",as);



    /* 
    "fgets" এর Input নেওয়ার Syntax:
    fgets(String_Name,String_Size,stdin); 
    */

   /* 
   বিঃদ্রঃ fgets-এ String Size Input যতটুকু তার চেয়ে অন্তত ১বেশি নিতে হবে,
   নাহলে Last Character-টা না নিয়ে Null Character ইনপুট নিয়ে নিবে Last-এ, 
   তাই ১ বেশি Size নিতে হবে Null Character-এর জন্যে।
    */

    char as[15];
    fgets(as,11,stdin);
    printf("%s",as);
    return 0; 
}