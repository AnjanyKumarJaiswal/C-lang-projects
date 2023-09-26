#include <stdio.h>
int main(){
    int year;
    printf("Enter the current year ");
    scanf("%d" , &year);
    if(year/4){
        printf("The year is a leap year %d", year);
    }
    else {
        printf("The year is not a leap year");
    }
}