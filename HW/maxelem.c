#include <stdio.h>
#include <stdlib.h>
void maxelem(int *arr, int size);
int main() {
    int n;
    printf("Enter size of array :");
    scanf("%d", &n);
    int *ptr = calloc(n, sizeof(int));

    printf("Enter the numbers :");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    maxelem(ptr, n);
    free(ptr);
    ptr = NULL;

    return 0;
}
void maxelem(int *arr, int size) {
    int freq = 1, maxfreq = 0, ans;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                freq++;
        }
        if (maxfreq < freq) {
            maxfreq = freq;
            ans = arr[i];
        }
    }
    printf("Max occuring element is : %d", ans);
    return;
}
