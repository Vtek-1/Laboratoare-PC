#include<stdio.h>
#include<math.h>
int main(){
    int num, num_orig, work, n = 0;
    float resultat;
printf("Introduceti numarul: ");
scanf("%d",&num);
num_orig = num;
while (num != 0){
    num /=10;
    ++n;}
num = num_orig;

while (num !=0){
    work = num%10;
    resultat += pow(work,n);
    num /=10;
}
if (resultat == num_orig){
    printf("Numarul %d este un numar Armstrong",num_orig);
else 
    printf("Numarul %d nu este un numar Armstrong",num_orig);
}
}