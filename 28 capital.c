#include <stdio.h>

int main()
{
    char ch;

    printf("Please input any letter");

    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The letter is capital");
    }
    else if (ch >= 'A' && ch <= 'Z' )
    {
        printf("The letter is capital");
    }
    return 0;
}
