#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, *A, *B;

    printf("Entrez la dimension N du tableau A : ");
    scanf("%d", &N);

    A = (int*)malloc(N * sizeof(int));

    printf("Entrez les éléments du tableau A :\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Entrez la dimension M du tableau B : ");
    scanf("%d", &M);

    B = (int*)malloc(M * sizeof(int));

    printf("Entrez les éléments du tableau B :\n");
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    A = (int*)realloc(A, (N + M) * sizeof(int));

    for (int i = 0; i < M; i++) {
        A[N + i] = B[i];
    }

    printf("Tableau A après l'ajout des éléments de B :\n");
    for (int i = 0; i < N + M; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    free(A);
    free(B);

    return 0;
}
