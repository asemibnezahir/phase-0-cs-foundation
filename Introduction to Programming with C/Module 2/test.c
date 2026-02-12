#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>=100000)
    {
        printf("turkey\n");
    }
    else if(num>=50000)
    {
        printf("sweden\n");
    }
    else if(num>=20000)
    {
        printf("pakistan\n");
    }
    else if(num>=10000)
    {
        printf("india\n");
    }
    else if(num>=5000)
    {
        printf("sajek\n");
        int khoroch;
        scanf("%d",&khoroch);
        int rem=num-khoroch;
        if(rem>=2000)
        {
            printf("Cox's o Zabo\n");
        }
    }
    else
    {
        printf("movie\n");
    }
    
    return 0;
}