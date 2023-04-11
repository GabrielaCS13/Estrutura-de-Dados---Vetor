#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 5

    int
    main()
{
     int i, soma, maior, menor = 0, vetor[N];
     for (i = 0; i < N; i++)
    {
         vetor[i] = rand() % 16;
         soma += vetor[i];
         printf("%d O dobro é: %d\n", vetor[i], vetor[i] * 2);
    }
     for (i = 0; i < N; i++)
    {
         if (vetor[i] % 2 == 0)
        {
             printf("É par: %d\n", vetor[i]);
        }
         if (vetor[i] > maior)
        {
             maior = vetor[i];
        }
         else if (vetor[i] < menor)
        {
             menor = vetor[i];
        }
         if (vetor[i] % 2 == 1)
        {
             printf("A raiz quadrada de %d: %g\n", vetor[i], sqrt(vetor[i]));
        }
        
    }
     printf("\nA soma dos valores é: %d\n", soma);
     printf("O maior valor é: %d\n", maior);
     printf("O menor valor é: %d\n", menor);
}