#include "labA.h"

int processA(const int* A, int k1) {
    int i, x, sum = 0;
    FILE* f;

    if (k1 != 0) {
        f = fopen("data", "r");
        for (i = 0; i < 20; ++i) {
            fscanf(f, "%d", &x);
            if (x > 0 && x % k1 == 0)
                sum += x;
        }
        fclose(f);
    }

    f = fopen("res", "w");
    fprintf(f, "Сумма положительных элементов, кратных %d: %d\n", k1, sum);
    fclose(f);

    return sum;
}
