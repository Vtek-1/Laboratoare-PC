#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Introduceți un număr: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numărul trebuie să fie pozitiv.\n");
        return 1;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("%d este un număr perfect.\n", num);
    else
        printf("%d nu este un număr perfect.\n", num);

    return 0;
}