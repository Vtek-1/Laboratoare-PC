#include <stdio.h>

int main() {
    int nr;
    int num=0;
    
    printf("Introdu un numar intreg: ");
    scanf("%d",&nr);
    
    if(nr==0){
        num=1;
    }
    else{
        if(nr<0){
            nr=-nr;
        }
        while (nr!=0){
            nr=nr/10;
            num++;
        }
    }
    printf("Numarul are %d cifre",num);
    return 0;
}
