#include <stdio.h>
int main()
{
    float a=20;
    int b=6;

    int sum=a+b;
    printf("Summation is: %d\n",sum);
    
    int sub=a-b;
    printf("Subtraction is: %d\n",sub);

    int mul=a*b;
    printf("Multiplication is: %d\n",mul);

    int div=a/b;
    printf("Division is: %d\n",div);

    float div1=a/b;
    printf("Division is: %f\n",div1);

    return 0;
}