#include<stdio.h>
#include<string.h>
int is_palindrome(char as[])
{
    int length=strlen(as);
    int flag=1,check;
    for(int i=0,j=length;i<j;i++,j--)
    {
        if(as[i]!=as[j-1])
        {
            // printf("Not Palindrome");
            check=0;
            flag=2;
        }
    }
    if(flag==1)
    {
        check=1;
        // printf("Palindrome");
    }
    return check;
}
int main()
{
    char as[1001];
    scanf("%s",&as);
    int test=is_palindrome(as);
    if(test==0)
    {
        printf("Not Palindrome");
    }
    else if(test==1)
    {
        printf("Palindrome");
    }
    return 0;
}