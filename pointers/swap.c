#include <stdio.h>
void swap(int *x, int *y)
{
    int z;
    z = *x;  // z -> a
    *x = *y; // a -> b
    *y = z;  // b -> a

    return;
}
int main()
{
    int a, b;
    printf("Enter a and b :");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("%d %d", a, b);

    return 0;
}