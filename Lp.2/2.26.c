#include <stdio.h>

int main() {
    int num, i, nrprim = 1;

    printf("Introduceți un număr: ");
    scanf("%d", &num);

    if (num <= 1) {
        nrprim = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                nrprim = 0; 
                break;
            }
        }
    }

    if (nrprim)
        printf("%d este un număr prim.\n", num);
    else
        printf("%d nu este un număr prim.\n", num);

    return 0;
}