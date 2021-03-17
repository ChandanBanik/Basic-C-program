#include <stdio.h>

int main()
{
    int i,num;

    for (num = 1; num <= 20; num++)
    {
        printf("\nMultiplication table of %d\n",num);

        for (i = 1; i <= 10; i++)
        {
        printf("\n%d X %d = %d\n",num, i, num*i );
        }
    }
    return 0;
}
