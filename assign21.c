#include <stdio.h>
int main()
{
    int n, digit;
    printf("enter a number : ");
    scanf("%d", &n);

    printf("digit :");
    while (n != 0)
    {
        digit = n % 10;
        printf("%d", digit);
        n /= 10;
    }

    return 0;
}