#include <stdio.h>

int main()
{
    int i,n,sum;

    printf("Input number of terms : \n");

    scanf ("%d",&n);

    for ( i = 1, sum = 0; i <= 100; i ++)
    {
            sum = sum + i;
    }
    printf("Sumation is %d\n",sum );

    return 0;
}
