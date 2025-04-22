#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number :");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}