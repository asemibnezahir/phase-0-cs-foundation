#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char st1[a+1];
    char st2[b+1];
    char st3[a+b+1];
    scanf("%s %s",&st1,&st2);
    for(int i=0,j=0;i<a+b;i++)
    {
        if(i<=a)
        {
            st3[i]=st1[i];
        }
        else if(i>a)
        {
            st3[i]=st2[j];
            j++;
        }
    }
    printf("%s",st3);
    return 0;
}