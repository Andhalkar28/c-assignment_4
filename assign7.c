#include <stdio.h>
int main()
{
    int i, sum = 0;
    i = 1;
    while (i <= 5)
    {
        sum += i;
        i++;
    }
    printf("sum=%d", sum);
    return 0;
}