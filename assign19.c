#include <stdio.h>
int main()
{
    int n, i,fact = 1;
    printf("\n enter a number :");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
        fact*=i;

    printf("\n factorial is :%d", fact);

    return 0;
}