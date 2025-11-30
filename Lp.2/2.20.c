#include <stdio.h>

int main() {
    int i = 0;

    printf("Valoare\t    Caracter\n");
    printf("-------------------\n");

    while (i <= 127) {
        if (i >= 32 && i <= 126)
            printf("%3d \t\t %c \n", i, i);         // Caractere vizibile
        else
            printf("%3d \t\t(nevizibil)\n", i);   // Caractere de control

        i++;
    }

    return 0;
}