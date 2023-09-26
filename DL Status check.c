#include <stdio.h>
int main(){
    int age;
    printf("Enter your age \n");
    scanf("%d" , &age);
    if((age>=18) && age <=70){
        printf("You are eligible to drive vehicle \n");
        printf("Check Driving licesens Expiry date and Date of issue \n");
    int Application;
    printf("Enter your aplication number \n");
    scanf("%d" , &Application);
    int issue;
    printf("Enter your year of issue of DL \n");
    scanf("%d" , &issue);
    int Current;
    printf("Enter the current year \n");
    scanf("%d" , &Current);
    int diff = Current - issue;
    if(diff>=22){
        printf("Your DL card is Expired its more than 22 years");

    }
    else {
        printf("Your DL is in under the date of expiry ");
    }

    }
    else {
        printf("You are not eligible to Drive \n");
    }
    
    return 0;
    }