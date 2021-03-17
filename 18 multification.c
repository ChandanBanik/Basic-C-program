#include <stdio.h>

int main()
{
    int i,n;

    printf("Enter any number for multification ");

    scanf("%d",&n);

    for (i = 1; i <= n;i++)
    {
        printf("%d x %d = %d\n\n",n,i,n*i);
    }
    return 0;
}
