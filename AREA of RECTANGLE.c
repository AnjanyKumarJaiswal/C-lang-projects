#include <stdio.h>
int main ()
{
    int l , b , area;
    printf(" Enter the length of the rectangle l \n");
    scanf( "%d", &l);
    printf( "Enter the Breath of the Rectangle b \n");
    scanf("%d", &b);
    area = l*b;
    printf("The Area of the rectangle is %d \n" , area);
    return 0;
}