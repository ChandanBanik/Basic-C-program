#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("please enter the temparature in celsius\n");

    scanf ("%lf",&celsius);

    farenheit = (celsius * 1.8) +32;

    printf("Temparature in farenheit is %lf\n",farenheit );

    return 0;
}
