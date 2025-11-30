#include <stdio.h>
int main(){
    int n;
    printf("Introduceti un numar real: ");
    scanf("%d",&n);
    
    if(n<1){
        printf("Introduceti un numar real mai mare ca 0.\n");
        return 0;
    }
    
    printf("Numerele naturale de la %d la 1 sunt:\n",n);
    while (1<=n){
        printf("%d, ",n);
        n--;
    }
}