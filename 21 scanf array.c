#include <stdio.h>

int main()
{
    int marks [5];

    int i;

    printf("Enter marks please: ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d roll = %d\n",i+1, marks[i]);
    }
    return 0;
}
