#include <stdio.h>
int main(){
    int day;
    printf("Introduceti un numar pentru a afala ziua saptamanii a acestuia: ");
    scanf("%d",&day);
    
    switch (day){
        case 1: printf("Luni este ziua numarul %d",day);
        break;
        case 2: printf("Marti este ziua numarul %d",day);
        break;
        case 3: printf("Miercuri este ziua numarul %d",day);
        break;
        case 4: printf("Joi este ziua numarul %d",day);
        break;
        case 5: printf("Vineri este ziua numarul %d",day);
        break;
        case 6: printf("Simbata este ziua numarul %d",day);
        break;
        case 7: printf("Duminica este ziua numarul %d",day);
        break;
        default: printf("Numaar invalid! Saptamina are 7 zile");
    }
    return 0;
}