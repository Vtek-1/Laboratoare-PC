#include <stdio.h>
int main(){
    int day;
    printf("Introduceti numarul lunii: ");
    scanf("%d",&day);
    
    switch (day){
        case 1: printf("Ianuarie are 31 zile ",day);
        break;
        case 2: printf("Februarie are 28/29 zile ",day);
        break;
        case 3: printf("Martie are 31 zile ",day);
        break;
        case 4: printf("Aprilie are 30 zile ",day);
        break;
        case 5: printf("Mai are 31 zile ",day);
        break;
        case 6: printf("Iunie are 30 zile ",day);
        break;
        case 7: printf("Iulie are 31 zile ",day);
        break;
        case 8: printf("August are 30 zile ",day);
        break;
        case 9: printf("Septembrie are 31 zile ",day);
        break;
        case 10: printf("Octombrie are 30 zile ",day);
        break;
        case 11: printf("Noiembrie are 31 zile ",day);
        break;
        case 12: printf("Decembrie are 30 zile ",day);
        break;
        default: printf("Numaar invalid! Exista doar 12 luni");
    }
    return 0;
}