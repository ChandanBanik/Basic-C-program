#include <stdio.h>

int main()
{
    int number;

    printf("Please input number ");

    scanf("%d",&number);

    if (number >= 10 || number >= 5)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
