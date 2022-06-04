// Made by: Fernando Schettini Github: https://github.com/FernandoSchett

#include <stdio.h>

int main() {
	int B, A, C , D, E, F, G, H;
	
	scanf("%d %d %d %d", &A, &B, &C, &D);
	E = A % 2;
	
	if(B > C && D>A && C+D > A+B && A>0 && B>0 && C>0 && D>0 && E == 0){
		printf("Valores aceitos\n");
	}else{
		printf("Valores nao aceitos\n");
	}
	
    return 0;
}
