#include <stdio.h> 
int main(){ 
    float nr1,nr2,nr3; 
    printf("Introduceti primul nr: "); 
    scanf("%f",&nr1); 
    printf("Introduceti al doilea nr: "); 
    scanf("%f",&nr2); 
    printf("Introduceti al treilea nr: "); 
    scanf("%f",&nr3); 
    
    if(nr1==nr2&&nr2==nr3){ 
            printf("Toate numerele sunt egale\n");
            } 
    else if((nr1==nr2)||(nr1==nr3)||(nr2==nr3) && (nr1!=nr2!=nr3)){ 
        printf("Avem doua numere egale\n");
        } 
        
    float max=nr1; 
    if(nr2 > max){ max=nr2; } 
    if(nr3 > max){ max=nr3; } 
    printf("Numarul maxim este: %.2f",max); 
    return 0; 
    
}