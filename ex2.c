#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()

{

    int i, vet_A[N], vet_B[N], vet_C[N];
    for (i = 0; i < N; i++)
    {
        vet_A[i] = rand() % 16;
        vet_B[i] = rand() % 16;
        printf("Vetor A: %d\n", vet_A[i]);
        printf("Vetor B: %d\n", vet_B[i]);
        vet_C[i] = vet_A[i] + vet_B[i];
        printf("Vetor C: %d\n", vet_C[i]);
    }
}
