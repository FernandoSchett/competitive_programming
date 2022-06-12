#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int cod, qnt;
	float soma;
	scanf(" %d %d", &cod, &qnt);
	
	switch(cod){
		case 1:
			soma = 4 * qnt;
			break;
		case 2:
			soma = 4.50 * qnt;
			break;
		case 3:
			soma = 5 * qnt;
			break;
		case 4:
			soma = 2 * qnt;
			break;
		case 5:
			soma = 1.50 * qnt;
			break;
	}
	printf("Total: R$ %.2f", soma);

	return 0;
}
