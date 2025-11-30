#include <stdio.h>

int main() {
    int baza, exponent;
    long long rezultat = 1;

    printf("Introduceți baza: ");
    scanf("%d", &baza);

    printf("Introduceți exponentul: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Exponent negativ – programul nu suportă fracții.\n");
        return 1;
    }

    for (int i = 1; i <= exponent; i++) {
        rezultat *= baza;
    }

    printf("%d la puterea %d este: %lld\n", baza, exponent, rezultat);
    return 0;
}