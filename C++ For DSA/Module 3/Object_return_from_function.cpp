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
Student fun()
{
    Student karim(45,5,3.28);
    return karim;
}
int main()
{
    Student Obj=fun();
    cout<<Obj.roll<<" "<<Obj.cls<<" "<<Obj.gpa<<endl;
    return 0;
}

//Static Object আমরা মেইন ফাংশন থেকে রিটার্ন করলে খুজে পাই।
