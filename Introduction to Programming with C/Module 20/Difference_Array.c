#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int k=1;k<=tc;k++)
    {
        //take size of all
        int in;
        scanf("%d",&in);
        //take input first array
        int arr[in];
        for(int i=0;i<in;i++)
        {
            scanf("%d",&arr[i]);
        }
        //copy second array
        int brr[in];
        for(int i=0;i<in;i++)
        {
            brr[i]=arr[i];
        }
        //sort in ascending ordar the second array
        for(int i=0;i<in-1;i++)
        {
            for(int j=i+1;j<in;j++)
            {
                if(brr[i]>brr[j])
                {
                    int temp=brr[i];
                    brr[i]=brr[j];
                    brr[j]=temp;
                }
            }
        }
        //declare third defference array
        int crr[in];
        for(int i=0;i<in;i++)
        {
            crr[i]=arr[i]-brr[i];
        }
        //print the abs value
        for(int i=0;i<in;i++)
        {
            printf("%d",abs(crr[i]));
            if(i!=in-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}