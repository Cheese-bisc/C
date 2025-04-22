#include <stdio.h>
int main()
{
    int n, count;
    printf("Enter number :");
    scanf("%d", &n);

    for (count = 0; n > 0; count++)

        n = n / 10;

    printf("%d", count);

    return 0;
}