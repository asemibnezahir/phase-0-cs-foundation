#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char st[101];
        scanf("%s",&st);
        int length=strlen(st);
        if(length<=10)
        {
            printf("%s",st);
        }
        else
        {
            printf("%c",st[0]);
            printf("%d",length-2);
            for(int i=0;i<=101;i++)
            {
                if(st[i]=='\0')
                {
                    printf("%c",st[i-1]);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}