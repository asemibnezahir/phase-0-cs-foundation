#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int j=1;j<=in;j++)
    {
    int in1,in2,out,sum=0;
    scanf("%d %d",&in1,&in2);
    for(int i=1;i<=10000;i++)
    {
        out=i;
        if(out<in1&&out>in2)
        {
            if(out%2!=0)
            {
                sum+=out; 
            }
        }
        if(out>in1&&out<in2)
        {
            if(out%2!=0)
            {
                sum+=out;
            }
        }

    }
    printf("%d\n",sum);
}

    return 0;
}