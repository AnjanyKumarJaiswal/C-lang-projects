#include <stdio.h>
int main ()
{
    float radius;
    printf("what is the radius of thw circle / cyclinder r? ");
    scanf("%f", &radius);
     float area = 3.14 *radius*radius;
    printf("The area of the circle is %f \n", area);
    float height;
    printf("Enter the height of the cyclinder h \n");
    scanf("%f", &height);
    float volume = height * area;
    printf("The volume of the cyclinder is %f", volume);
    return 0;

}