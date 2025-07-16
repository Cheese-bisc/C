#include <math.h>
#include <stdio.h>
int power(int a, int b);
int main() {
    int x, y;
    printf("Enter numbers : ");
    scanf("%d %d", &x, &y);
    float ans = power(x, y);
    printf("%f", ans);
    return 0;
}
int power(int a, int b) {
    if (b == 1)
        return a;
    return a * pow(a, b - 1);
}
