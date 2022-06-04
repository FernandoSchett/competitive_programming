// Made by: Fernando Schettini Github: https://github.com/FernandoSchett

#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B, C, maior;
	
	scanf(" %d %d %d", &A, &B, &C);
	maior = A + B + abs( A - B);
	maior = maior/2;
	maior =  (maior +C + abs(maior - C))/2;
	printf("%d eh o maior\n", maior);

    return 0;
}
