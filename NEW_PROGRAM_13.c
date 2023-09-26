#include <stdio.h>
int main(){
     int i , a , sum =0;
     printf("Enter the number of natural numbers:");
     scanf("%d" , &n);
     for(i=0; i<=10; i++ )
     {
      sum += i;
      printf("The sum of natural numbers are %d : " , sum);
     }
     return 0;
     
}