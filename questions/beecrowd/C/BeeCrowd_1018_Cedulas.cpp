// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
  
int main(){
	int B, A, C , D, E, F, G, H ;

	scanf(" %d", &A);
	printf(" %d\n", A);
	B = A % 100;
	A = A / 100;
	printf("%d nota(s) de R$ 100,00\n", A);
	C = B % 50;
	B = B / 50;
	printf("%d nota(s) de R$ 50,00\n", B);
	D = C % 20;
	C = C / 20;
	printf("%d nota(s) de R$ 20,00\n", C);
	E = D % 10;
	D = D / 10;
	printf("%d nota(s) de R$ 10,00\n", D);
	F = E % 5;
	E = E / 5;
	printf("%d nota(s) de R$ 5,00\n", E);
	G = F % 2;
	F = F / 2;
	printf("%d nota(s) de R$ 2,00\n", F);
	G = G / 1;
	printf("%d nota(s) de R$ 1,00\n", G);

    return 0;
}
