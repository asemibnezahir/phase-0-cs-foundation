#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    string name;
    char sec;
    int mark;
};
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        Student s1,s2,s3;
        cin>>s1.id>>s1.name>>s1.sec>>s1.mark;
        cin>>s2.id>>s2.name>>s2.sec>>s2.mark;
        cin>>s3.id>>s3.name>>s3.sec>>s3.mark;
        int mx=max({s1.mark,s2.mark,s3.mark});

        if(mx==s1.mark&&s1.mark!=s2.mark&&s1.mark!=s3.mark)
        {
            cout<<s1.id<<" "<<s1.name<<" "<<s1.sec<<" "<<s1.mark;
        }

        else if(mx==s2.mark&&s2.mark!=s1.mark&&s2.mark!=s3.mark)
        {
            cout<<s2.id<<" "<<s2.name<<" "<<s2.sec<<" "<<s2.mark;
        }

        else if(mx==s3.mark&&s2.mark!=s3.mark&&s1.mark!=s3.mark)
        {
            cout<<s3.id<<" "<<s3.name<<" "<<s3.sec<<" "<<s3.mark;
        }

        else if(mx==s1.mark&&s1.mark==s2.mark)
        {
            if(s1.id<s2.id)
            {
                cout<<s1.id<<" "<<s1.name<<" "<<s1.sec<<" "<<s1.mark;
            }
            else
            {
                cout<<s2.id<<" "<<s2.name<<" "<<s2.sec<<" "<<s2.mark;
            }
        }

        else if(mx==s3.mark&&s2.mark==s3.mark)
        {
            if(s2.id<s3.id)
            {
                cout<<s2.id<<" "<<s2.name<<" "<<s2.sec<<" "<<s2.mark;
            }
            else
            {
                cout<<s3.id<<" "<<s3.name<<" "<<s3.sec<<" "<<s3.mark;
            }
        }

        else if(mx==s1.mark&&s1.mark==s3.mark)
        {
            if(s1.id<s3.id)
            {
                cout<<s1.id<<" "<<s1.name<<" "<<s1.sec<<" "<<s1.mark;
            }
            else
            {
                cout<<s3.id<<" "<<s3.name<<" "<<s3.sec<<" "<<s3.mark;
            }
        }
        cout<<endl;
    }

    return 0;
}