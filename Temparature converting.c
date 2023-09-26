#include <stdio.h>
int main()
{
   float C , farenheit;  
    printf("Enter the temparature in celcius C");
    scanf("%f", &C);
    farenheit =  C*9/5 + 32;
    printf("The temparture in farenheit is F %4.3f", farenheit );
    return 0;

}