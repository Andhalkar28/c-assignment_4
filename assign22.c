#include <stdio.h>
int main()
{
    int n, count;
    printf("enter a number : ");
    scanf("%d", &n);

    count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    printf("total digits is :", count);
    return 0;
}