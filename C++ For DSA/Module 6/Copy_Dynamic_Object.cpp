#include<bits/stdc++.h>
using namespace std;

class Player
{
    public:
    string name;
    string country;
    int jursey;
    Player(string name,string country, int jursey)
    {
        this->name=name;
        this->country=country;
        this->jursey=jursey;
    }
};
int main()
{
    Player* kohli=new Player("Kohli","India",10);
    Player* dhoni=new Player("Dhoni","India",20);
    cout<<kohli->name<<"-->"<<kohli->country<<"-->"<<kohli->jursey<<endl;
    cout<<dhoni->name<<"-->"<<dhoni->country<<"-->"<<dhoni->jursey<<endl;
    *kohli=*dhoni; //Copy an object after dereferencing
    delete dhoni;
    cout<<endl;
    cout<<kohli->name<<"-->"<<kohli->country<<"-->"<<kohli->jursey<<endl;

    //Full Details in Module-6 Video-8 and 9
    return 0;
}