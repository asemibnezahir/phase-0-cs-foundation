#include<stdio.h>
int main()
{
    int _1D_Array[5]; //Declaring 1D or Normal array which contains 5 variables space
    int _2D_Array[3][5];//Declaring 2D Array which contains 3 array & every array contains 5 variables space.
    /*If we consider it as a matrix, then 3 is row & 5 is column*/
    /*Two Access The Variables in 2D Array, we can call them by their index
    In 2D Array, their index will be first parent array index then child array's index*/
    _2D_Array[1][2]=10; //Stored value in 1st row, 2nd column
    printf("%d",_2D_Array[1][2]);
    return 0;
}