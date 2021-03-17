#include <stdio.h>

int main()
{
    int num1, num2, value;

    char sign;

    printf("Enter frist number\n");

    scanf("%d",&num1);

    printf("Enter second number\n");

    scanf("%d",&num2);

    value = num1 + num2;

    sign = '+';

    printf("%d %c %d = %d\n",num1, sign, num2, value);

    value = num1 - num2;

    sign = '-';

    printf("%d %c %d = %d\n",num1, sign, num2, value);

    value = num1 * num2;

    sign = '*';

    printf("%d %c %d = %d\n",num1, sign, num2, value);

    value = num1 / num2;

    sign = '/';

    printf("%d %c %d = %d\n",num1, sign, num2, value);
}

















