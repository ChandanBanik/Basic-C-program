#include <stdio.h>

int main()
{
    int number;

    printf("Enter number please.\n");

    scanf("%d",&number);

    if ( number % 3 == 0 && number % 5 == 0)
    {
        printf("FizzBuzz\n");
    }
    else if ( number % 3 == 0 )
    {
        printf("Fizz\n");
    }
    else
    {
        printf("Buzz\n");
    }
    return 0;
}
