#include <stdio.h>

int main()
{
    int i,n;

    i = 0;

    while (i < 10)
    {
        i++;

        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d \n\n",i );
    }
    return 0;
}
