#include <stdio.h>
int main()
{
    int n, sum = 0, lastdigit = 0;
    printf("Enter number :");
    scanf("%d", &n);

    while (n != 0)
    {
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n / 10;
    }

    printf("Sum is %d", sum);

    return 0;
}