#include<stdio.h>
#include<string.h>
int my_len(char in[])
{
    int cnt=0;
    for(int i=0;in[i]!='\0';i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    char A[1000000];
    scanf("%s",A);
    int Alen=my_len(A);
    printf("%d",Alen);
    return 0;
}