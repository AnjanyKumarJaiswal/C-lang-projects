#include <stdio.h>
int main()
{
    int a;
    printf("ENTER YOUR NUMBER TO ITS EVEN OR ODD");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("THE NUMBER IS EVEN %d",a);
    }
    else {
        printf("THE NUMBER IS ODD %d",a);
    }
    return 0;
}