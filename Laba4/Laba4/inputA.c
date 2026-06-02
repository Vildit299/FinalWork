#include "labA.h"

void inputA(int* A) {
    int i;
    FILE* f;

    double cos_value = cos(i);
    *(A + i) = (int)(cos_value);

    f = fopen("data", "w");
    for (i = 0; i < 20; ++i)
        fprintf(f, "%d ", *(A + i));
    fprintf(f, "\n");
    fclose(f);
}
