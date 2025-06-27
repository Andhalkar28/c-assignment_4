#include <stdio.h>
int main()
{
    int x, y;
    printf("enter X & Y :");
    scanf("%d%d", &x, &y);

    while (x <= y)
    {
        printf("\n%d ", x);
        x++;
    }

    return 0;
}