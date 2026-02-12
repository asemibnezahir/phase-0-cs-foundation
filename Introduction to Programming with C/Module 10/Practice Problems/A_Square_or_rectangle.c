#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    for(int i=0;i<in;i++)
    {
        int width,height;
        scanf("%d %d",&height,&width);
        if(width==height)
        {
            printf("Square\n");
        }
        else if(width!=height)
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}