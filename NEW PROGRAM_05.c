#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number");
    scanf("%d" , &a);
    if (a % 97 == 0) 
    {
        printf("The number is divisible by 97");
    }
    else{
        printf("The number is not divisible by 97");
    }
}