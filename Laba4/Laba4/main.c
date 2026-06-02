#include "labA.h"

int main(void) {
    setlocale(LC_ALL, "Russian");

    int A[20], k1, sum;
    FILE* f;

    srand((unsigned)time(NULL));

    inputA(A);
    printA(A);

    printf("\n¬ведите k1 (не 0): ");
    scanf("%d", &k1);

    f = fopen("data", "a");
    fprintf(f, "%d\n", k1);
    fclose(f);

    sum = processA(A, k1);
    printResultA(k1, sum);

    getchar();
    return 0;
}
