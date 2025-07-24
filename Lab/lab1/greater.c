#include <stdio.h>
int greater(int *x, int *y);
int main() {
    int a, b;
    printf("Enter two numbers to compare :");
    scanf("%d %d", &a, &b);

    int ans = greater(&a, &b);
    printf("The greater number of the two is : %d", ans);

    return 0;
}
int greater(int *x, int *y) { return (*x > *y) ? *x : *y; }
