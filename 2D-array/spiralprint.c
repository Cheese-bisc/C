#include <stdio.h>
int main() {
    // minimum row print --> minrow ++

    // maximum coloumn print --> maxcol --

    // maximum row reverse print --> maxrow --

    // minimum coloumn reverse print --> mincol ++

    int n, m;

    printf("Enter rows :");
    scanf("%d", &n);
    printf("Enter coloumns :");
    scanf("%d", &m);

    int arr[n][m];

    // input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // spiral
    int minr = 0, maxr = n - 1, minc = 0, maxc = m - 1, count = 0;
    int tne = n * m;

    while (count < tne) {
        for (int j = minc; j <= maxc && count < tne; j++) {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;

        for (int i = minr; i <= maxr && count < tne; i++) {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;

        for (int j = maxc; j >= minc && count < tne; j--) {
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;

        for (int i = maxr; i >= minr && count < tne; i--) {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}
