#include <stdio.h>
int main(){
    char lit;
    printf("Introdu un caracter: ");
    scanf(" %c",&lit);
    
if((lit >= 'A' && lit <= 'Z')||(lit>='a'&& lit<='z')){
    printf("Caracterul '%c' este o litera din alfabet",lit);
}
else{
    printf("Caracterul '%c' nu este o litera din alfabet",lit);
}

    return 0;
}