#include <stdio.h>
int main(){
    int nr;
    printf("Introdu un an: ");
    scanf("%d",&nr);
    
if((nr%4==0 && nr%100!=0)||(nr%400==0)){
    printf("Anul %d este bisect");
}
else{
    printf("Anul %d nu este bisect");
}

    return 0;
}