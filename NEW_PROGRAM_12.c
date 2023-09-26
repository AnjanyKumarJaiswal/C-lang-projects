#include <stdio.h>
int main(){
    int n , m , i;
    printf("Enter the number");
    scanf("%d" , &n);
    for ( i = 10; i >= 0; i--)
    {
        m = n*i;
        printf("%d x %d = %d \n" , n , i , m);
    }
    return 0;
    

}