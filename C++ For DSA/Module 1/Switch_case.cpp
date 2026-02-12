#include<iostream>
using namespace std;
int main()
{
    // We can use like if else when condition is "==" type
    int day;
    cin >>day;
    switch(day)
    {
        case 1: cout <<"Saturday\n"; //if(day==1)

        case 2: cout <<"Sunday\n";  //else if(day==2)

        case 3: cout <<"Monday\n";  //else if(day==3)

        case 4: cout <<"Tuesday\n"; //else if(day==4)

        case 5: cout <<"Wednesday\n"; //else if(day==5)

        case 6: cout <<"Thursday\n"; //else if(day==6)

        case 7: cout <<"Friday\n"; //else if(day==7)
    }
    //Bug: it runs all cases codes after one case is true
    return 0;
}