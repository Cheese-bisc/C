#include <stdio.h>
int fact(int x);
int main() {
    int n;
    scanf("%d", &n);

    printf("%d", fact(n));
}
int fact(int x) {
    int factorial = 1;
    for (int i = 2; i <= x; i++)
        factorial *= i;

    return factorial;
}
