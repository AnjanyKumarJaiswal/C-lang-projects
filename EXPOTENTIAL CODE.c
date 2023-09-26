#include <stdio.h>
int main()
{
   int a , n;
   printf("Enter the number to get power");
   scanf("%d", &a);
   printf("Enter the value of n");
   scanf("%d", &n);
   printf ("THE POWER %d to %d is %lf \n", a, n, pow( a,n));
   return 0; 
} 