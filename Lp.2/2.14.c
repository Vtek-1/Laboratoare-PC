#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sum = 0;
    printf("Introduceți un număr: ");
    scanf("%d", &num);

   
    num = abs(num);

   
    while (num > 0) {
        sum += num % 10;  
        num /= 10;         
    }

    printf("Suma cifrelor este: %d\n", sum);
    return 0;
}