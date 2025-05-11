#include <stdio.h>
int factorial(int x);
int main() {
    int x;
    printf("Enter your number : ");
    scanf("%d", &x);

    int fact = factorial(x);
    printf("%d", fact);
    return 0;
}
int factorial(int x) {
    if (x == 1 || x == 0)
        return 1;
    return x * factorial(x - 1);
}
