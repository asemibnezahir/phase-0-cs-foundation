#include<stdio.h>
int main()
{
    /*Sorting মানে সাজানো, একটি এরের মধ্যে সংখ্যা থাকলে তাদের
    দুইভাবে সাজানো যায়ঃ
    ১. Sorted Ascending Order অর্থ্যাৎ ছোট থেকে বড় আকারে সাজানো
    ২. Sorted Descending Order অর্থ্যাৎ বড় থেকে ছোট আকারে সাজানো */    
    
    int in;
    scanf("%d",&in);
    int arr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;


    //Sorting in Ascending Order
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<in;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");


    //Sorting in Descending Order
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[i]<arr[j]) //Just this Relational Operator Changed
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<in;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}