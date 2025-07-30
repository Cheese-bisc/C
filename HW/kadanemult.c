#include <stdio.h>
int main() {
    int n, currMult = 1, maxMult = 1;
    printf("Enter no of elememts :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements :");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        currMult *= arr[i];
        if (maxMult < currMult)
            maxMult = currMult;
        if (currMult <= 0)
            currMult = 1;
    }
    printf("%d", maxMult);
    return 0;
}
