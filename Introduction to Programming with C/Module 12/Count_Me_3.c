#include<stdio.h>
#include<string.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int a=0;a<tc;a++)
    {
        char in[10001];
        scanf("%s",&in);
        int Alen=strlen(in);
        int count_d=0,count_c=0,count_s=0;
        for(int i=0;i<Alen;i++)
        {
            if(in[i]>='A'&&in[i]<='Z')
            {
                count_c++;
            }
            else if(in[i]>='a'&&in[i]<='z')
            {
                count_s++;
            }
            else if(in[i]>='0'&&in[i]<='9')
            {
                count_d++;
            }
        }
        printf("%d %d %d\n",count_c,count_s,count_d);
    }
    return 0;
}