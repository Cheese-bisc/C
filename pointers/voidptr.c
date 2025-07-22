#include <stdio.h>

int main() {
    float n = 12.324;
    void *ptr = &n;

    printf("%f", *(float *)ptr); // Cannot dereference a void pointer

    return 0;
}
