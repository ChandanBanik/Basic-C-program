#include <stdio.h>

int main()
{
    int i,m,n;

    for ( i = 1; i <= 10; i++)
    {
        printf("\nMultification of %d\n",i);

        for ( n = 1; n <= 10; n++)
        {
            m = i * n;

            printf("\n%d X %d = %d\n",i, n, m );
        }
    }
    return 0;
}
