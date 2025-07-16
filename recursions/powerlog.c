#include <stdio.h>
int powerlog(int x, int y);
int main() {
    int a, b;
    printf("Enter base and exponent : ");
    scanf("%d %d", &a, &b);

    int ans = powerlog(a, b);
    printf("%d", ans);
    return 0;
}
int powerlog(int x, int y) {
    int z;
    if (y == 0)
        return 1;
    z = powerlog(x, y / 2);
    if (y % 2 == 0)
        return z * z;
    else
        return z * z * x;
}
