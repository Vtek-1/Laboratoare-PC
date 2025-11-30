#include <stdio.h>
int main(){
    int n,i=1;
    printf("Introduceti un numar real: ");
    scanf("%d",&n);
    
    if(n<1){
        printf("Introduceti un numar real mai mare ca 0.\n");
        return 0;
    }
    
    printf("Numerele naturale de la 1 la %d sunt:\n",n);
    while (i<=n){
        printf("%d, ",i);
        i++;
    }
}