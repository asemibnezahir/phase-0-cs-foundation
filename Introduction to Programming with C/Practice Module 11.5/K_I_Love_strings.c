#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int e=0;e<test;e++)
    {
        char A[51],B[51];
        scanf("%s %s",&A,&B);
        int Alen=strlen(A),Blen=strlen(B);
        int i=0,j=0;
        while(i<Alen&&j<Blen)
        {
            printf("%c%c",A[i],B[j]);
            i++;j++;
        }
        if(Alen<Blen)
        {
            for(i=Alen;i<Blen;i++)
            {
                printf("%c",B[i]);
            }
        }
        else if(Blen<Alen)
        {
            for(i=Blen;i<Alen;i++)
            {
                printf("%c",A[i]);
            }
        }
        printf("\n");
    }
    return 0;
}