#include<stdio.h>
int main()
{
    //A means Number of Input
    //B means Various Number of Input
    int A,B;
    scanf("%d %d",&A,&B);
    
    //arr[A] array for all input
    int arr[A];
    for(int i=0;i<A;i++)
    {
        scanf("%d",&arr[i]);
    }

    //brr[B] array for all different input one time
    int brr[B];
    for(int i=0;i<B;i++)
    {
       brr[i]=arr[i];
    }

    //freq array for counting variable
    int freq[9]={0};
    //idx for counting array index
    int idx=0;
    for(int j=0;j<B;j++)
    {
        //Loop for counting first similar input
        for(int i=0;i<A;i++)
        {
        
            if(arr[i]==brr[j])
            {
            freq[idx]++;
            }

        }
        //print the counted one
        printf("%d",freq[idx]);
        printf("\n");
        //idx++ to access the next index to change counting variable
        idx++;
    }
    return 0;
}