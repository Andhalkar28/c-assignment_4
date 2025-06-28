#include <stdio.h>
int main()
{
    int x, n, i, result = 1;
    printf("\n enter base and power : ");
    scanf("%d%d", &x, &n);

    for (i = 1; i <= n; i++)
    {
        result *= x;
    }
    printf("%d^%d is : %d ", x, n, result);
    return 0;
}