#include <stdio.h>
int main(){
      char name[100];
      printf("Enter your name \n ");
      scanf("%s" , &name);
      int class;
      printf("Enter you class \n");
      scanf("%d" , &class);
      float marks;
      printf("Enter your marks according to the subject: \n");
      scanf("%f" , &marks);
      int subjects;
      printf("Enter the number of subjects : \n");
      scanf("%d" , &subjects);
      int Emarks = 100;
       float Tmarks = Emarks*subjects;
      float Gmarks = subjects*marks;
      if ((marks>=33) ) {
        printf("The person is pass in each subject %4.3f \n " , marks);
        float percentage = (Gmarks/Tmarks)*100 ;
        if(percentage>=40){
          printf("YOU HAVE A TOTAL OF %f percenatge \n" , percentage);

        }
        else {
          printf("You have total percentage of %f percentage \n " , percentage);
        }

      }
      else {
        printf("You have failed the exam");
      }
      return 0;
}