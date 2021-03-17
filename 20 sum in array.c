#include <stdio.h>

int main()
{
    int marks [5];

    int i,sum;

    sum = 0;

    printf("Enter marks please: ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0; i<5; i++)
    {
        sum += marks[i];
    }
    printf("sum = %d",sum);

    return 0;
}
