// Made by: Fernando Schettini Github: https://github.com/FernandoSchett

#include <stdio.h>
 
int main() {
	int valo; 
 	char nome [21];
 	double valo2, valo3;
	  
	scanf(" %s", &nome);
	scanf(" %lf", &valo2);
	scanf(" %lf", &valo3);
	valo3 = valo3 * 15/100;
	valo2 = valo2 + valo3;
	printf("TOTAL = R$ %.2lf\n", valo2);
 	  
    return 0;
}
