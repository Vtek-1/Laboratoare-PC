#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char numStr[20]; // Buffer pentru numarul introdus ca sir
    printf("Introduceți un număr: ");
    scanf("%s", numStr); // Citim numarul ca text

    int isNegative = numStr[0] == '-'; // Verificam daca e negativ
    int start = isNegative ? 1 : 0;    // Daca e negativ, prima cifra e la indexul 1

    int len = strlen(numStr); // Lungimea totală a sirului

    // Schimbam prima si ultima cifra 
    char temp = numStr[start];
    numStr[start] = numStr[len - 1];
    numStr[len - 1] = temp;

    // Convertim sirul inapoi in numar intreg
    int result = atoi(numStr);

    printf("Numărul modificat este: %d\n", result);
    return 0;
}