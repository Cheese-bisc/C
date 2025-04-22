#include <stdio.h>

int main()
{
    int n;
    float a = 100;

    printf("Enter n :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%f \n", a);
        a = a / 2;
    }

    return 0;
}
