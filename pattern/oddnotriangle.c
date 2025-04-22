#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter m , n :");
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }
    return 0;
}