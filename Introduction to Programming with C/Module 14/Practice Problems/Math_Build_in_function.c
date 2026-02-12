#include<stdio.h>
#include<math.h>
int main()
{
    int ans_ceil= ceil(4.2); //ceil function
    int ans_floor= floor(4.7);//floor function
    int ans_round= round(4.2);//round function
    printf("%d %d %d\n",ans_ceil,ans_floor,ans_round);

    double square_root=sqrt(20); //To Calculate Square Root
    printf("%lf\n",square_root);

    int num_to_the_power_num= pow(3,2); //That means 3 to the power 2 or 3^2
    printf("%d\n",num_to_the_power_num);

    int modulas=abs(-10); //abs function takes the positive value or modulas
    printf("%d\n",modulas);
    
    return 0;
}