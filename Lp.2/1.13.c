#include <stdio.h>
int main(){
    int suma, totnot=0;
    int bancnote[]={500,200,100,50,20,10,5,1};
    int numnot[8]={0};
    
    printf("introduceti o suma: ");
    scanf("%d",&suma);
    
    for(int i = 0; i<8;i++){
        if(suma>=bancnote[i]){
            numnot[i]=suma/bancnote[i];
            suma=suma%bancnote[i];
            totnot += numnot[i];
        }
    }
    printf("Numarul de bancnote necesasre: %d\n",totnot);
    printf("Detalii:\n");
    for (int i = 0; i<8;i++){
        if (numnot[i]>0){
            printf(" %d x %d", numnot[i],bancnote[i]);
        }
    }
    return 0;
}