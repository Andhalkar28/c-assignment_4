#include <stdio.h>
int main()
{
    int n, temp, rem, sum = 0;

    printf("enter 3 digit number : ");
    scanf("%d", &n);
    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }
    if (sum == temp)
        printf("amstrong ");
    else
        printf("not amstrong ");

    return 0;
}