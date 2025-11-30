#include <stdio.h>
#include <stdlib.h>

int count_negativ(int **matrice, int n, int col) {
    int count = 0;
    for (int a = 0; a < n; a++) {
        if (matrice[a][col] < 0) {
            count++;
        }
    }
    return count;
}
void change_column(int **matrice, int n, int col1, int col2) {
    for (int a = 0; a < n; a++) {
        int temp = matrice[a][col1];
        matrice[a][col1] = matrice[a][col2];
        matrice[a][col2] = temp;
    }
}

int main() {
    int n, m;
    printf("Introduceți numărul de linii (n): ");
    scanf("%d", &n);
    printf("Introduceți numărul de coloane (m): ");
    scanf("%d", &m);

    int **matrice = (int **)malloc(n * sizeof(int *));
    if (matrice == NULL) {
        printf("Eroare la alocarea memoriei pentru linii.\n");
        return 1;
    }

    for (int a = 0; a < n; a++) {
        matrice[a] = (int *)malloc(m * sizeof(int));
        if (matrice[a] == NULL) {
            printf("Eroare la alocarea memoriei pentru coloane.\n");
            return 1;
        }
    }
    printf("Introduceți elementele matricei:\n");
    for (int a = 0; a < n; a++)
        for (int b = 0; b < m; b++)
            scanf("%d", &matrice[a][b]);

    for (int a = 0; a < m - 1; a++)
        for (int b = a + 1; b < m; b++)
            if (count_negativ(matrice, n, a) > count_negativ(matrice, n, b))
                change_column(matrice, n, a, b);

    printf("Matricea după sortarea coloanelor:\n");
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++)
            printf("%4d", matrice[a][b]);
        printf("\n");
    }

    for (int a = 0; a < n; a++)
        free(matrice[a]);
    free(matrice);

    return 0;
}