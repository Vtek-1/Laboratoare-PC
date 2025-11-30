#include <stdio.h>
int main(){
    int nr;
    printf("Introdu un numar intreg: ");
    scanf("%d",&nr);
    
if(nr %2 == 0 && nr!=0){
    printf("Numarul introdus este par");
}
else if(nr%2!=0 && nr!=0){
    printf("Numarul introdus este impar");
}
else{
    printf("Ati introdus 0");
}
    return 0;
}