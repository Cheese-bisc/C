#include <stdio.h>
#include <string.h>
typedef struct car {
        int chassis;
        int headlights;
        char name[20];
} car;
int main() {
    int a = 10;
    float b = 3.14;
    car alto;
    alto.chassis = 1;
    alto.headlights = 2;
    strcpy(alto.name, "maruti");

    void *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &alto;

    printf("%d\n", *(int *)ptr[0]);
    printf("%f\n", *(float *)ptr[1]);
    printf("%d\n", ((car *)ptr[2])->chassis);
    printf("%d\n", ((car *)ptr[2])->headlights);
    printf("%s\n", (*(car *)ptr[2]).name);
}
