
#include <stdio.h>
#include <math.h>

int main() {
	float nr1,nr2;
	printf("Introduceti primul nr: ");
	scanf("%f",&nr1);

	printf("Introduceti al doilea nr: ");
	scanf("%f",&nr2);

	if (nr1>nr2){
		printf("Maximul dintre cele doua numere este: %.2f\n",nr1);
	}
	else if (nr1<nr2){
		printf("Maximul dintre cele doua numere este: %.2f\n",nr2);
	}
	else {
		printf("Numerele sunt egale");
	}
	return 0;
}