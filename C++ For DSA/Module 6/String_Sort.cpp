#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Array Sorting এর জন্যে আমরা sort function এ array এর স্টার্টিং পয়েন্ট Array_name[0]
    বা array_name ইউজ করতাম এবং এন্ডিং পয়েন্টের জন্যে এরে এর শেষের ইন্ডেক্সের ঠিক পরের ঘর
    অর্থ্যাৎ array_name+array_size ইউজ করতাম।
    */

    /*
    String এর ক্ষেত্রেও সেম টু সেম String এর Iterator বা string starting pointer & ending
    pointer দিয়ে স্ট্রিং কে sort করা যাবে।
    */

    string s="helloworld";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    
    return 0;
}