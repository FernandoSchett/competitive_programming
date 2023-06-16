// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h> 

int main() {
	int valo;  
	double valo2, valo3, valo4;

	scanf(" %d %lf %lf", &valo,&valo2, &valo3);
	valo2 = valo2 * valo3; 
	scanf(" %d %lf %lf", &valo,&valo4, &valo3);
	valo4 = valo4 * valo3;
	valo2 = valo4 + valo2;
	printf("VALOR A PAGAR: R$ %.2lf\n", valo2);  
    
	return 0;
}
