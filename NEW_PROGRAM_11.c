#include <stdio.h>
int main(){
    int a , b , i;
    printf("Enter the number for multipilcation");
    scanf("%d" , &a);
    for ( i = 0; i <= 10; i++)
    {
        b = a*i;
       printf(" %d x %d  = %d\n" , a, i , b);
    
    }
    return 0;
    
}