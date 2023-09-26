#include <stdio.h>
int main ()
{
    float l , b , area;
    printf(" Enter the length of the rectangle l \n");
    scanf( "%f", &l);
    printf( "Enter the Breath of the Rectangle b \n");
    scanf("%f", &b);
    area = l * b;
    printf("the area is %f" , area);
    return 0;
}