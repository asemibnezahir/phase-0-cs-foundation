#include<stdio.h>
#include<limits.h>
int main()
{
    //For Unlimited Input 
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
   
    
    //For Fixed 3 input

    int arr[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d ",&arr[i]);
    }
    

    //min number printing
    int min=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d ",min);

    //max number printing
    int max=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}