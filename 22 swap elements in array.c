#include <stdio.h>

int main()
{
    int ara[5] = {10,20,30,40,50};

    int i, temp, n = 5;

    for (i = 0; i < n / 2; i++)

    //exchange value of ara[i] and ara [n-1-i]
    {
        temp = ara[i];

        ara[i] = ara[n-1-i];

        ara[n-1-i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d \n",ara[i]);
    }
    return 0;
}
