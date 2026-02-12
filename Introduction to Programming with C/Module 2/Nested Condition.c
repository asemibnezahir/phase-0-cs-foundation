#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox's Bazar Zabo\n");
        if(tk>=10000)
        {
            printf("Sent Martin o Zabo\n");
        }
        else
        {
            printf("Cox's Bazar thekei ferot chole asbo\n");
        }
    }
    else
    {
        printf("Kothao Zabo na\n");
    }
    return 0;
}

/*Nested Condition means New Condition after applying one condition,
when the first condition is true then programme review the nested 
condition*/
