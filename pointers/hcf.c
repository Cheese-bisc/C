#include <stdio.h>

int min(int l, int m)
{
    if (l < m)
        return l;
    else
        return m;
}

int hcf(int x, int y)
{
    int gcd;
    for (int i = 1; i <= min(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int a, b;
    printf("Enter a and b :");
    scanf("%d %d", &a, &b);

    int ans = hcf(a, b);

    printf("The hcf of %d and %d is : %d", a, b, ans);

    return 0;
}
