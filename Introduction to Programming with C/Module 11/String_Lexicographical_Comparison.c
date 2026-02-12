//Try to understand Lexicographical Comparison means comparison with alphabetical ordar.
//Here Given Some Example:
//A="Apple",B="Try" here A<B;
//A="Apple",B="Apply" here A<B;
//A="Abcd",B="ab" here A>B;
//A="Ad",B="abcd" here A>B;


//My Solve
#include<stdio.h>
#include<string.h>
int main()
{
    char A[101],B[101];
    scanf("%s %s",&A,&B);
    int Alen=strlen(A),Blen=strlen(B);
    for(int i=0;i<101;i++)
    {
        if(A[i]==B[i]&&A[i]!='\0'&&B[i]!='\0')
        {
            continue;
        }

        else if(A[i]=='\0'||B[i]=='\0')
        {
            if(A[i-1]==B[i-1])
            {
                if(Alen>Blen)
                {
                    printf("B String is smaller than A String");
                    break;
                }
                else
                {
                    printf("A String is smaller than B String");
                    break;
                }
            }
        }

        else if(A[i]<B[i])
        {
            printf("A String is smaller than B String");
            break;
        }
        else if(B[i]<A[i])
        {
            printf("B String is smaller than A String");
            break;
        }
        // A[0]='a';
        // B[0]='t';
    }
    return 0;
}

