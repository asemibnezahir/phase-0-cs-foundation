#include<stdio.h>
int main()
{
    char vow;
    scanf("%c",&vow);
    if(vow=='a'||vow=='e'||vow=='i'||vow=='o'||vow=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}