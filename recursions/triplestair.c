#include <stdio.h>
// its like fibonacci series
int stair(int n);
int main() {
    int x;
    printf("Enter number of stairs : ");
    scanf("%d", &x);

    int ans = stair(x);
    printf("%d", ans);
    return 0;
}
int stair(int n) {
    if (n <= 3)
        return n;
    return stair(n - 1) + stair(n - 2) + stair(n - 3);
}
