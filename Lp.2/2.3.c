#include <stdio.h>
int main(){
    char n='a';
    printf("Imprimam toate literele din alfabet:");
    while(n<='z'){
        printf("%c, ",n);
        n++;
    }
}