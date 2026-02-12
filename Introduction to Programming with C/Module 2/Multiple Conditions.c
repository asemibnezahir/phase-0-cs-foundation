#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("Barger Khabo");
    }

    else if(tk>=50)
    {
        printf("Fuchka Khabo");
    }
    else
    {
        printf("Konokichu Khabo Na");
    }
    return 0;
}
/*We can add "else if" unlimited for adding new condition
between "if" condition & "else" condition.*/

//But only one condition will run which condition is right counted first.