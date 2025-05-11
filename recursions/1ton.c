#include <stdio.h>
void oneton(int x, int n);
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    oneton(1, n);
    return 0;
}
void oneton(int x, int n) {
    if (x > n)
        return;
    printf("%d ", x);
    oneton(x + 1, n);
    return;
}
