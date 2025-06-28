#include <stdio.h>
int main()
{
    int n, digit, even = 0, odd = 0, zero = 0;
    printf("enter a number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        if (digit == 0)
            zero++;
        else if (digit % 2 == 0)
            even++;
        else
            odd++;

        n /= 10;
    }
    printf("\n even : %d , \n odd :%d \n zero :%d", even, odd, zero);

    return 0;
}