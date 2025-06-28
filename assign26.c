#include <stdio.h>
int main()
{
    int n, rev;

    printf("enter number : ");
    scanf("%d", &n);

    rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("reversed num :%d ", rev);

    return 0;
}