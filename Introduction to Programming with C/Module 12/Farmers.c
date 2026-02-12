#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        int F1,F2,D;
        scanf("%d %d %d",&F1,&F2,&D);
        int Days=F1*D/(F1+F2);
        int save=D-Days;
        printf("%d\n",save);
    }
    return 0;
}