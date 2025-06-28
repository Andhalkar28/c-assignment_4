#include <stdio.h>
int main()
{
    int x, y, i, sum = 0;
    printf("\n enter x and y : ");
    scanf("%d%d", &x, &y);

    for (i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("\n sum of even no is :%d", sum);
    return 0;
}