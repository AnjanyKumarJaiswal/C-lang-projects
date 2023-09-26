#include <stdio.h>
int main()
{
   int a;
   printf("Enter the number");
   scanf("%d", &a);
   if (a>0)
   {
    printf("THE NUMBER IS POSTIVE %d", a);
   }
   else if (a<0)
   {
    printf("THE NUMBER IS NEGATIVE %d", a);
   }
   else {
    printf("THE NUMBER IS EQUAL TO ZERO %d", a);
   }
   
   return 0;
}