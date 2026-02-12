#include<stdio.h>
int main()
{
    char as[100];
    scanf("%s",&as);
    int cnt=0;
    //My Solving Method
    /* 
    for(int i=0;i<=100;i++)
    {
        if(as[i]!='\0')
        {
            cnt++;
        }
        else if(as[i]=='\0')
        {
            break;
        }
    } 
    */

    //Solving Method in class
    for(int i=0;as[i]!='\0';i++)
    {
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}