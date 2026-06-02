#include "labA.h"

void printA(const int* A) {
    int i, x;
    FILE* f;

    printf("Массив A: ");

    f = fopen("data", "r");
    for (i = 0; i < 20; ++i) {
        fscanf(f, "%d", &x);
        printf("%d ", x);
    }
    fclose(f);
}
