//If Else Long Process----------------

/* #include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);


    if(num1<num2&&num1<num3)
    {
        printf("%d ",num1);
        if(num2>num3)
        {
            printf("%d",num2);
        }
        else if(num2<num3)
        {
            printf("%d",num3);
        }
        else
        {
            printf("%d",num2);
        }
    }


    else if(num2<num1&&num2<num3)
    {
        printf("%d ",num2);
        if(num1>num3)
        {
            printf("%d",num1);
        }
        else if(num1<num3)
        {
            printf("%d",num3);
        }
        else
        {
            printf("%d",num1);
        }
    }


    else if(num3<num1&&num3<num2)
    {
        printf("%d ",num3);
        if(num1>num2)
        {
            printf("%d",num1);
        }
        else if(num1<num2)
        {
            printf("%d",num2);
        }
        else
        {
            printf("%d",num1);
        }
    }

    else if(num1==num2)
    {
        printf("%d ",num1);
        printf("%d",num3);
    }

    else if(num2==num3)
    {
        printf("%d ",num2);
        printf("%d",num1);
    }
    
    else if(num1==num3)
    {
        printf("%d ",num1);
        printf("%d",num2);
    }
    return 0;
}
 */




 //Loop & Array Short Process--------------
#include<stdio.h>
#include<limits.h>
int main()
{
    int n[3];
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
        //Sreaching min value
        if(n[i]<min)
        {
            min=n[i];
        }
        //Sreaching max value
        if(n[i]>max)
        {
            max=n[i];
        }
    }
    //Printing min & max value
    printf("%d %d",min,max);
    return 0;
}