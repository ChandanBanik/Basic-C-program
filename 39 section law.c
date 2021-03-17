#include <stdio.h>

int main()
{
    int i,n,sum = 0;

    printf("Enter upper limit : \n");

    scanf ("%d",&n);

    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf("Sumation of odd numbers %d\n",sum );

    return 0;
}
