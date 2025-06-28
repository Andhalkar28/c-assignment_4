#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("\n enter a number :");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
        sum += i;

    printf("\n sum of even no is :%d", sum);

    return 0;
}