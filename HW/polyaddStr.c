#include <stdio.h>
#include <stdlib.h>

typedef struct poly {
        int coeff;
        int deg;
} poly;

int main() {
    int deg1, deg2;
    printf("Enter number of terms in each polynomial: ");
    scanf("%d %d", &deg1, &deg2);

    poly *p1 = malloc(deg1 * sizeof(poly));
    poly *p2 = malloc(deg2 * sizeof(poly));

    printf("----Polynomial 1-----\n");
    for (int i = 0; i < deg1; i++) {
        printf("Coefficient: ");
        scanf("%d", &p1[i].coeff);
        printf("Degree: ");
        scanf("%d", &p1[i].deg);
    }

    printf("----Polynomial 2-----\n");
    for (int i = 0; i < deg2; i++) {
        printf("Coefficient: ");
        scanf("%d", &p2[i].coeff);
        printf("Degree: ");
        scanf("%d", &p2[i].deg);
    }

    // Sort both polynomials by degree (bubble sort for simplicity)
    for (int i = 0; i < deg1 - 1; i++) {
        for (int j = 0; j < deg1 - i - 1; j++) {
            if (p1[j].deg > p1[j + 1].deg) {
                poly temp = p1[j];
                p1[j] = p1[j + 1];
                p1[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < deg2 - 1; i++) {
        for (int j = 0; j < deg2 - i - 1; j++) {
            if (p2[j].deg > p2[j + 1].deg) {
                poly temp = p2[j];
                p2[j] = p2[j + 1];
                p2[j + 1] = temp;
            }
        }
    }

    int i = 0, j = 0, resIndex = 0;
    poly *res = malloc((deg1 + deg2) * sizeof(poly));

    while (i < deg1 && j < deg2) {
        if (p1[i].deg == p2[j].deg) {
            res[resIndex].deg = p1[i].deg;
            res[resIndex].coeff = p1[i].coeff + p2[j].coeff;
            i++;
            j++;
        } else if (p1[i].deg < p2[j].deg) {
            res[resIndex] = p1[i];
            i++;
        } else {
            res[resIndex] = p2[j];
            j++;
        }
        resIndex++;
    }

    while (i < deg1) {
        res[resIndex++] = p1[i++];
    }
    while (j < deg2) {
        res[resIndex++] = p2[j++];
    }

    printf("\n--- Resultant Polynomial ---\n");
    for (int i = 0; i < resIndex; i++) {
        if (res[i].coeff != 0) {
            printf("%dx^%d", res[i].coeff, res[i].deg);
            if (i < resIndex - 1)
                printf(" + ");
        }
    }
    printf("\n");

    free(p1);
    free(p2);
    free(res);
    return 0;
}
