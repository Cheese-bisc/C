#include <stdio.h>
#include <stdlib.h>
#define MALLOC(p, s)                                                           \
    if (!((p) = malloc(s))) {                                                  \
        fprintf(stderr, "No Memowy");                                          \
    }
int main() {
    int i, *pi;
    float f, *pf;
    MALLOC(pi, sizeof(int));
    MALLOC(pf, sizeof(float));

    *pi = 18736;
    *pf = 456.34;

    printf("%d,%f", *pi, *pf);
    free(pi);
    free(pf);
    return 0;
}
