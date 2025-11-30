#include <stdio.h>
int main(){
    int n=2;
    printf("Imprimam toate cifrele pare:");
    while(n<=100){
        printf("%d, ",n);
        n+=2;
    }
    return 0;
}