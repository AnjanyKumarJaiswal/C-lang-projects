#include <stdio.h>
int main(){
    char name[100];
    printf("Enter your name \n");
    scanf("%s" , &name);
    int age ;
    printf("Enter Your age \n");
    scanf("%d" , &age);
    if (( age>=18 && age == 70) ){
        printf("You are above 18 and below 70 , or you have a vipass \n");
    }
    else {
        printf("you cannot drive");
    }
    
    
    }
