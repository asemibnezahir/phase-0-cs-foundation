#include<bits/stdc++.h>
using namespace std;
int main()
{
    //We Can Delete a Dynamic Array After Declaring it with delete keyword
    //Works Only for Dynamic Array, not for static array
    //Deleting a Variable--> delete variable_name;
    //Deleting an Array--> delete[] Array_name;


    int *a=new int[3];
    for(int i=0;i<3;i++)
    {
        cin >>a[i];
    }

    int *b=new int[5];
    for(int i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    b[3]=40;
    b[4]=50;
    delete[] a;
    for(int i=0;i<5;i++)
    {
        cout <<b<<" ";
    }
    return 0;
}
