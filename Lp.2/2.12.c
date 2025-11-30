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
    int rez=first+last;
    printf("Suma primei si ultimii cifre a numarului este: %d",rez);
    return 0;
}