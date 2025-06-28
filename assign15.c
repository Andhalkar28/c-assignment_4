#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("\n sum of even no from 1 to 10 :  ");

    for (i = 2; i <= 10; i += 2)
        sum += i;

    printf("\n sum is :%d", sum);

    return 0;
}