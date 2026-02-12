#include<stdio.h>
int main()
{
int a;
a=5;
printf("%d",a);
return 0;
}
/*To print a Variable 
We could not use the data type in 
print function directly,
We have to use the Format Specifier*/

//For int, Format Specifier is "%d"
//For float, Format Specifier is "%f"
//For char, Format Specifier is "%c"


/*float automatically prints 6 digits after decimal sign,
we can control it by using .digit number between % & f.
For Example if i want 3 digit then i have to use %.3f as
Format Specifier in this case.*/
