#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("\n sum of even no from 100 to 200 :  ");

    for (i = 100; i <= 200; i += 2)
        sum += i;

    printf("\n sum is :%d", sum);

    return 0;
}