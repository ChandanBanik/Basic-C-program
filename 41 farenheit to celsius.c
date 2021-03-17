#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("please enter the temparature in farenheit\n");

    scanf ("%lf",&farenheit);

    celsius = ((farenheit - 32)*5) / 9;

    printf("Temparature in celsius is %lf\n",celsius);

    return 0;
}
