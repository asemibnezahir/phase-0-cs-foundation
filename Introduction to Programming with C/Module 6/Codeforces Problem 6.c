#include<stdio.h>
int main()
{
    int dei;
    scanf("%d",&dei);
    for(int i=1;i<=dei;i++)
    {
        int num;
        scanf("%d",&num);
        if(num!=0)
        {
            while (num!=0)
            {
                printf("%d ",num%10);
                num/=10;
            }
        }
        else
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}

// With Do while Loop
/* 
    #include<stdio.h>
int main()
{
    int dei;
    scanf("%d",&dei);
    for(int i=1;i<=dei;i++)
    {
        int num;
        scanf("%d",&num);
            do{
                printf("%d ",num%10);
                num/=10;
            }while(num!=0);

        printf("\n");
    }
    return 0;
}


 */
