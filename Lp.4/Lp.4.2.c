#include <stdio.h>
#include <stdlib.h>

void program1() {
    int rows, cols;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &rows);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols], Sum[rows][cols];

    printf("\nIntroduceti elementele matricei A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nIntroduceti elementele matricei B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nMatricea suma (A + B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", Sum[i][j]);
        }
          printf("\n");
}
}
void program2() {
    int rows, cols, scalar;

    printf("Introduceti numarul de linii: ");
    scanf("%d", &rows);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &cols);

    int A[rows][cols];

    printf("\nIntroduceti elementele matricei A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nIntroduceti scalarul: ");
    scanf("%d", &scalar);
    printf("\nMatricea rezultata dupa inmultirea cu %d:\n", scalar);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j] * scalar);
        }
        printf("\n");
    }
}
void program3() {

    int rows, cols;
    int i, j, equal = 1;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &rows);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols];

    printf("\nIntroduceti elementele matricei A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nIntroduceti elementele matricei B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (A[i][j] != B[i][j]) {
                equal = 0;
                break;
            }
        }
        if (!equal) break;
    }
    if (equal)
        printf("\nMatricele sunt egale.\n");
    else
        printf("\nMatricele NU sunt egale.\n");

}
void program4() {

    int n;
    printf("Introduceti dimensiunea matricei patratice (n): ");
    scanf("%d", &n);

    int A[n][n];

    printf("\nIntroduceti elementele matricei:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += A[i][n - 1 - i];
    }
    printf("\nSuma elementelor diagonalei secundare este: %d\n", suma);
}
void program5() {

    int n;
    printf("Introduceti dimensiunea matricei patratice (n): ");
    scanf("%d", &n);

    int A[n][n];
    printf("\nIntroduceti elementele matricei:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        int temp = A[i][i];             
        A[i][i] = A[i][n - 1 - i];      
        A[i][n - 1 - i] = temp;          
    }
    printf("\nMatricea dupa schimbarea diagonalelor:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
void program6() {
    int n;
    printf("Introduceti dimensiunea matricei patratice (n): ");
    scanf("%d", &n);

    int A[n][n];

    printf("\nIntroduceti elementele matricei:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nMatricea triunghiulara inferioara:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                printf("%d ", A[i][j]); 
                printf("0 ");  
        }
        printf("\n");
    }
}
void program7() {
    int n;
    printf("Introduceti dimensiunea matricei patratice (n): ");
    scanf("%d", &n);

    int A[n][n];

    printf("\nIntroduceti elementele matricei:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) { 
            suma += A[i][j];
        }
    }
    printf("\nSuma elementelor matricei triunghiulare inferioare este: %d\n", suma);
}
void program8() {
int determinant(int A[10][10], int n) {
    int det = 0;
    int submatrix[10][10];

    if (n == 1) {
        return A[0][0];
    } else if (n == 2) {
        return (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    } else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x) continue;
                    submatrix[subi][subj] = A[i][j];
                    subj++;
                }
                subi++;
            }
            int sign = (x % 2 == 0) ? 1 : -1;
            det += sign * A[0][x] * determinant(submatrix, n - 1);
        }
    }
    return det;
}
    int n;
    printf("Introduceti dimensiunea matricei patratice (n): ");
    scanf("%d", &n);

    int A[10][10];
    printf("\nIntroduceti elementele matricei:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    int det = determinant(A, n);
    printf("\nDeterminantul matricei este: %d\n", det);

}
void program9() {

    int rows, cols;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &rows);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &cols);

    int A[rows][cols];
    int zeroCount = 0;
    int total = rows * cols;

    printf("\nIntroduceti elementele matricei:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
            if (A[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    float procent = (zeroCount * 100.0) / total;
    printf("\nNumarul total de elemente: %d\n", total);
    printf("Numarul de zerouri: %d\n", zeroCount);
    printf("Procentul de zerouri: %.2f%%\n", procent);

    if (procent >= 70.0)
        printf("Matricea este rarefiata.\n");
    else
        printf("Matricea NU este rarefiata.\n");
}
void program10() {
    int n;
    printf("Introduceti dimensiunea matricei patratice (n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n];
    printf("\nIntroduceti elementele matricei:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = A[j][n - 1 - i];
        }
    }
    printf("\nMatricea rotita la stanga (90°):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int optiune;
    do {
        printf("\n--- MENIU PRINCIPAL ---\n");
        printf("1)1.  Program ce adună două matrici\n");
        printf("2)3.  Program ce înmulțește matricea la un scalar\n");
        printf("3)5.  Programa ce verifică egalitatea a două matrici\n");
        printf("4)7.  Program ce calculează suma elementelor diagonalei secundare\n");
        printf("5)9.  Program ce scimbă cu locul două diagonale a matricei\n");
        printf("6)11. Program ce găsește matrice triunghiulară inferioară\n");
        printf("7)13. Program ce calculează suma matricei triunghiulare inferioare\n");
        printf("8)15. Program ce găsește determinatul unei matrice\n");
        printf("9)17. Program ce verifică dacă matricea e rarefiată\n");
        printf("10)19.Program ce rotește matricea la stânga\n");
        printf("0. Iesire\n");
        printf("Alegeti optiunea: ");
        scanf("%d", &optiune);

        switch(optiune) {
            case 1: program1(); break;
            case 2: program2(); break;
            case 3: program3(); break;
            case 4: program4(); break;
            case 5: program5(); break;
            case 6: program6(); break;
            case 7: program7(); break;
            case 8: program8(); break;
            case 9: program9(); break;
            case 10: program10(); break;
            case 0: printf("Iesire din program.\n"); break;
            default: printf("Optiune invalida!\n");
        }
    } while(optiune != 0);

    return 0;
}
