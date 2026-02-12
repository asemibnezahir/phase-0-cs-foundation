#include<stdio.h>
#include<string.h>
int main()
{
    char in[100001];
    scanf("%s",&in);
    int Alen=strlen(in);
    int Count_cons=0;
    for(int i=0;i<Alen;i++)
    {
        if(in[i]!='a'&&in[i]!='e'&&in[i]!='i'&&in[i]!='o'&&in[i]!='u')
        {
            Count_cons++;
        }
    }
    printf("%d",Count_cons);
    return 0;
}