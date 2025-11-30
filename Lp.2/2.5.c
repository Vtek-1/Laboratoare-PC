#include <stdio.h>
int main(){
    int n=1;
    printf("Imprimam toate cifrele impare:");
    while(n<=100){
        printf("%d, ",n);
        n+=2;
    }
    return 0;
}