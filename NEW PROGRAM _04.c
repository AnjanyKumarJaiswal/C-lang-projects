#include <stdio.h>
int main ()
{
    int x , y;
    printf("Enter the value of x \n");
    scanf("%d " , &x );
    printf("Enter the value of  y \n ");
    scanf("%d " , &y );
     int sum = 3*x - 8*y;
    printf("THE VALUE OF 3x - 8y is %d", sum);
    return 0;
}