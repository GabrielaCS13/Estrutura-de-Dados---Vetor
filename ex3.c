#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int i, vetor[N], vet[N];
    for (i = 0; i < N; i++)
    {
        vetor[i] = rand() % 16;
        vet[i] = rand() % 16;
        printf("Vetor 1: %d\n", vetor[i]);
        printf("Vetor 2: %d\n", vet[i]);
    }
}