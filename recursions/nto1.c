#include <stdio.h>
void nto1(int x);
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    nto1(n);
    return 0;
}
void nto1(int x) {
    if (x == 0)
        return;
    printf("%d ", x);
    nto1(x - 1);
    return;
}
