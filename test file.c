#include <stdio.h>

int main()
{
	int a , b;
    printf("ENTER THE VALUE OF a");
    scanf("%d" , &a );
    printf("ENTER THE VALUE OF b");
    scanf("%d" , &b);
    int  sum = a + b;
    printf("THE SUM OF a and b is %d" , sum);
    int diff = a - b;
    printf("THE DIFFERENCE IN BETWEEN THESE TWO a  and b  ARE %d " , diff);
    
    return 0;
}