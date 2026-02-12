#include<bits/stdc++.h>
using namespace std;
class Student
{
    public: //access modifier
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll,int math,int english) //constractor
    {
        this->name=name;
        (*this).roll=roll;
        this->math=math;
        this->english=english;
    }

    void pri() //function inside class
    {
        cout<<"Roll Number "<<roll<<" Named "<<name<<" has got total "<<math+english<<" marks"<<endl;
    }
};
int main()
{
    
    Student sakib("Sakib Al Hasan",12,90,93);
    sakib.pri(); //accessing function inside class from main function

    Student asem("Asem Ibne Zahir",15,100,94);
    asem.pri();

    return 0;
}