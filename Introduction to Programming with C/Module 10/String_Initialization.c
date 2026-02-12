#include<stdio.h>
int main()
{
    //String Initialization Normally
    // char as[5]={'A','S','E','M'};
    //Size 4 এর বদলে 5 নিলাম যাতে প্রোগ্রাম Null বসাতে পারে। 
    // printf("%s",as);


    //String Power in Initialization
    char as[5]="ASEM";
    printf("%s",as);
    return 0;
}