#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("enter a number :");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n%d ", i);
        i++;
    }

    return 0;
}