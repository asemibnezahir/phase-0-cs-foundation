#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    



    //My Solving Method before class
    /* 
    if(n%2==0)
    {
        for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
        {
            int pnt_1=arr[i],pnt_2=arr[j];
            arr[i]=pnt_2;
            arr[j]=pnt_1;
        }
    }
    else
    {
        int cng=n-1;
        for(int i=0,j=n-1;i<cng/2,j>cng/2;i++,j--)
        {
            int pnt_1=arr[i],pnt_2=arr[j];
            arr[i]=pnt_2;
            arr[j]=pnt_1;
        }
    } 
    */




    //Solving Method according to class

    int i=0,j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}