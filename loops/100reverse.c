#include <stdio.h>
int main()
{
    int n, a = 100;
    printf("Enter n :");
    scanf("%d", &n);

    for (int i = 1; a > 0; i++)
    {
        printf("%d\n", a);
        a = a - 3;
    }

    return 0;
}