#include <stdio.h>
int main()
{
    float P, R , T;
    printf("Enter the  value of principle P \n");
    scanf("%f", &P);
    printf("Enter the ratre value R");
    scanf("%f" , &R);
    printf("Enter the time taken in years T");
    scanf("%f", &T );
    float SI;
    SI = P*R*T/100;
    printf("THE SIMPLE INTERST VALUE OF GIVEN PROBLEM IS SI %f" , SI);
    return 0;
}