#include <stdio.h>
int fibo(int x);
int main() {
    int n;
    printf("Enter the term to be printed : ");
    scanf("%d", &n);

    int ans = fibo(n);
    printf("%d", ans);
    return 0;
}
int fibo(int x) {
    if (x <= 2)
        return 1;
    return fibo(x - 1) + fibo(x - 2);
}
