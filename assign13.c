#include <stdio.h>
int main()
{
    int i, n;
    printf("\n enter a number :  ");
    scanf("\n %d", &n);

    for (i = 2; i <= n; i += 2)
        printf("\n %d", i);

    return 0;
}