#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("enter X & Y:");
    scanf("%d%d", &x, &y);

    sum = (y * (y + 1) / 2) - ((x - 1) * x / 2);
    printf("sum=%d", sum);
    return 0;
}
