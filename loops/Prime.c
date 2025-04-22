#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    int a = 0;

    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            a = 1;
        }
    }
    if (n == 1)
        printf("Number is unique");
    else if (a == 0)
        printf("Number is prime");
    else if (a == 1)
        printf("Number is composite");

    return 0;
}