#include "labA.h"

void inputA(int* A) {
    int i;
    FILE* f;

    for (i = 0; i < 20; ++i)
        *(A + i) = rand() % 101 - 50;

    f = fopen("data", "w");
    for (i = 0; i < 20; ++i)
        fprintf(f, "%d ", *(A + i));
    fprintf(f, "\n");
    fclose(f);
}
