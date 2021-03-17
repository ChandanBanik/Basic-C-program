#include<stdio.h>

int main()
{
    char name[10];

    int i,length;

    scanf("%s", name);

    i = 0;

    while (name[i] != '\0')
    {
      i ++;
    }
     length = i;

     printf("%s has %d characters.\n",name,length);

     return 0;
}
