#include <stdio.h>
int main()
{
    int a;
    printf("Enter height:");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a + 1 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}