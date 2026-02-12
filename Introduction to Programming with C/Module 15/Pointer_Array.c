#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("Array's 0 index address: %p\n",&a[0]);
    printf("printing Array name: %p\n",a);
    //proved that array name works like a pointer, it stores the address of 0th index

    //we can also dereference the array name & access the 0th index value
    *a=15;
    printf("%d\n",a[0]);

    int arr[5]={100,200,300,400,500};
    *arr=600; //Accessed index 0 value
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    //we can also access other indexes by this method
    //syntax is: *(arr+index_number)
    *(arr+1)=700; //Accessed index 1 value
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    *(arr+4)=1000; //Accessed index 1 value
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}