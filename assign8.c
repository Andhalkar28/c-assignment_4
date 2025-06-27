#include <stdio.h>
int main()
{
    int i, sum = 0;
    i = 100;
    while (i <= 150)
    {
        sum += i;
        i++;
    }
    printf("sum=%d", sum);
    return 0;
}