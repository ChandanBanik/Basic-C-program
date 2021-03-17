#include <stdio.h>

int main()
{
    int i;

    i = 1;

    while (i <= 100)
    {
        printf("%d \n\n",i );

        i ++;

        if (i > 10)
        {
            break;
        }
    }
    return 0;
}
