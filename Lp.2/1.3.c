#include <stdio.h>

int main(){
    float nr;
        printf("Introduceti un numar: ");
        scanf("%f",&nr);
        
    if(nr<0){
        printf("Numarul este negativ");
    }
    else if(nr>0){
        printf("Numarul este pozitiv");
    }
    else {
        printf("Numarul introdus este 0");
    }
    return 0;
}