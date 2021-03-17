#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age please.\n");

    scanf("%d",&age);

    if ( age >= 18 && age <= 30)
    {
        printf("Yes, you are eligible.\n");
    }
    else
    {
        printf("Sorry, you are not eligible.\n");
    }
    return 0;
}
