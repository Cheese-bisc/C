#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 10;
    int *ptr = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
}
