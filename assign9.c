#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("enter number :");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("sum=%d", sum);
    return 0;
}

/*
sum=n*(n+1)/2
*/