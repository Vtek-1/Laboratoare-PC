#include <stdio.h>
#include <stdlib.h>

int main() {
    int nr,first,last;
    printf("Introduceti un numar intreg: ");
    scanf("%d",&nr);
    
    int nr_poz =abs(nr);
    last = nr_poz % 10;
    first=nr_poz;
    while(first>=10){
        first=first/10;
    }
    printf("Prima cifra: %d\n",first);
    printf("Ultima cifra: %d\n",last);
    return 0;
}