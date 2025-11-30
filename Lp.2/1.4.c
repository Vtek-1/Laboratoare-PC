#include <stdio.h>
int main(){
    int nr;
    printf("Introduceti un numar intreg: ");
    scanf("%d",&nr);
    
if(nr % 5 == 0){
    printf("Numarul introdus este divizibil cu 5\n");
}
else{
    printf("Numarul introdus nu este divizibil cu 5\n");
}
if(nr % 11 == 0){
    printf("Numarul introdus este divizibil cu 11\n");
}
else{
    printf("Numarul introdus nu este divizibil cu 11\n");
}
    return 0;
}