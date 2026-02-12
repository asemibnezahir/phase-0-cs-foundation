#include<iostream>
#include<iomanip> //header file for iomanip--> Input & Output Manupulation
using namespace std;
int main()
{
    //দশমিক সংখ্যায় দশমিকের পরে যতটুকু প্রিন্ট করতে চাই এটা কন্ট্রোল করতে সি++ এ সেটপ্রিসিশন ইউজ করতে হয়
    double asem;
    cin >>asem;
    cout <<asem <<endl;
    //In default 5 digits will be taken

    //To control this with setprecision
    double gihan;
    cin >>gihan;
    cout <<fixed<<setprecision(6)<<gihan<<endl; //this is printing 6 digits after decimal
    cout <<fixed<<setprecision(3)<<gihan<<endl; //this is printing 6 digits after decimal
    return 0;
}