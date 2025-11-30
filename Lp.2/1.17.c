#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,D,x1,x2,RP,IP;
    printf("Fie ecuatia ax^2+bx+c=0\n");
    printf("Introduceti coeficientul a: ");
    scanf("%f",&a);
    printf("Introduceti coeficientul b: ");
    scanf("%f",&b);
    printf("Introduceti coeficientul c: ");
    scanf("%f",&c);
    
    if(a==b){
        printf("a trebuie sa fie diferit de 0\n");
    }
    
    D=b*b-4*a*c;
    
    if(D>0){
        x1=(-b+sqrt(D))/(2*a);
        x1=(-b-sqrt(D))/(2*a);
        printf("Radacinile sunt reale si distincte\n");
        printf("x1=%.2f\n",x1);
        printf("x2=%.2f\n",x2);
    }
    else if(D==0){
        x1=-b/(2*a);
        printf("Radacinile sunt reale si egale\n");
        printf("x=%.2f\n",x1);
    }
    else{
        RP=-b/(2*a);
        IP=sqrt(-D)/(2*a);
        printf("Radacinile sunt complexe\n");
        printf("x1=%.2f + %.2f",RP,IP);
        printf("x2=%.2f + %.2f",RP,IP);
    }
    return 0;
}