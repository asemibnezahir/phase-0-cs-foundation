#include<stdio.h>
int main()
{   
    printf("Enter your Mark: ");
    int number;
    scanf("%d",&number);
    
    if(number>100)
    {
        printf("Sorry, Your Mark limit is 100");
    }

    if(number>=90)
    {
        printf("Your Grade is A+");
    }

    else if(number>=80)
    {
        printf("Your Grade is B");
    }

    else if(number>=70)
    {
        printf("Your Grade is C");
    }

    else if(number>=60)
    {
        printf("Your Grade is D");
    }
    else
    {
        printf("Your Grade is F");
    }

    return 0;
}