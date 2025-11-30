#include <stdio.h>
int main(){
    float unghi1,unghi2,unghi3;
    printf("Introduceti primul unghi: ");
    scanf("%f",&unghi1);
    printf("Introduceti al doilea unghi: ");
    scanf("%f",&unghi2);
    printf("Introduceti al treile unghi: ");
    scanf("%f",&unghi3);
    
    if((unghi1+unghi2+unghi3==180) && unghi1>0 &&unghi2>0 && unghi3>0){
        printf("Triunghiul este valid.");
    }
    else{
        printf("Triunghiul nu este valid\n");
    }
    return 0;
}