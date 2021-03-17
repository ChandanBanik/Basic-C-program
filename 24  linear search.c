#include<stdio.h>

int main()
{
    int ara[] = {2,3,4,5,6,8};

    int i,n,key;

    n = 6;

    scanf("%d",&key);

    for(i = 0; i < n; i++)
    {
     if ( ara[i] == key)
     {
       printf("%d is found in the array.\n",key);

        break;
     }
    }
    if (i == n)
    {
        printf("%d is not found in the array.\n",key);
    }
    return 0;
}
