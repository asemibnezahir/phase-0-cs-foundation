#include<stdio.h>
void fun(int arr[])
{
    arr[2]=5;
}

void fun_2(int brr[],int in) //int in for calling the array size
{
    for(int i=0;i<in;i++)
    {
        printf("%d ",brr[i]);
    }
}
int main()
{
    int arr[5]={10,20,30,40,50};
    fun(arr);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //it perfectly changed because array name is one kind of pointer,
    //that's why it works in "pass by reference method"


    //if we want to take input array with size from main function,
    //then we can access it if we send the array size also
    int in;
    scanf("%d",&in);
    int brr[in];
    for(int i=0;i<in;i++)
    {
        scanf("%d",&brr[i]);
    }
    fun_2(brr,in);

    //Note: We can't return normal array, we have to learn dynamic array
    return 0;
}