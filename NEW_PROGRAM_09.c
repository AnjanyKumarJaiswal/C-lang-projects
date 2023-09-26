#include <stdio.h>
int main (){
    float income;
    float tax; 
    printf("Enter the salary income of each employee");
    scanf("%f" , &income);
    if(income>=250000 || income<=500000){
        printf("The annual income of an empolyee is %f  \n" , income);
        tax= income*5/100;
        printf("The tax is paid by the employee is %f" , tax);
    } 
    else if(income>=500000 || income<=1000000) {
       printf("The annual income of an empolyee is %f \n " , income); 
        tax = income*20/100;
        printf("The tax is paid by the employee is %f" , tax);
    }
    else {
        printf("The annual income of an empolyee is %f \n " , income);
        tax = income*30/100;
        printf("The tax is paid by the employee is %f" , tax);
    }
    return 0;
    
}