#include <stdio.h>
int main(){
    char ch;
    printf("Introdu un caracter: ");
    scanf(" %c",&ch);
    
if((ch >= 'A' && ch <= 'Z')||(ch>='a'&& ch<='z')){
    printf("Caracterul '%c' este o litera",ch);
}
else if(ch>='0' && ch<= '9'){
    printf("Caracterul '%c' este o cifra",ch);
}
else{
    printf("Caracterul '%c' este un semn special",ch);
}
    return 0;
}