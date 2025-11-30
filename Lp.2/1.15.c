#include <stdio.h>
int main(){
    float a,b,c;
    printf("Introduceti prima latura: ");
    scanf("%f",&a);
    printf("Introduceti a doua latura: ");
    scanf("%f",&b);
    printf("Introduceti a treia latura: ");
    scanf("%f",&c);
    
    if(a+b>c && b+c>a &&a+c>b){
        printf("Triunghiul este valid.");
    }
    else{
        printf("Triunghiul nu este valid\n");
    }
    return 0;
}