#include <stdio.h>

int main()
{
    int reminder, number = 5;

    int divisor = 2;

    while (number >= divisor)
    {
      number = number - divisor;
    }
    reminder = number;

    printf("The reminder is %d",reminder);

    return 0;
}
