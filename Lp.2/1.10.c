#include <stdio.h>
int main(){
    char ch;
    printf("Introdu un caracter: ");
    scanf(" %c",&ch);
    
if(ch >= 'A' && ch <= 'Z'){
    printf("Caracterul '%c' este cu majuscula",ch);
}
else if(ch>='a'&& ch<='z'){
    printf("Caracterul '%c' este cu minuscule",ch);
}
else{
    printf("CRcterul introdus nu este o litera");
}
    return 0;
}