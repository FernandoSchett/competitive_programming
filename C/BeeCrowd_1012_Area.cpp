// Made by: Fernando Schettini Github: https://github.com/FernandoSchett

#include <stdio.h>
 
int main() {
	double A, B, C, area; 

	scanf("%lf %lf %lf", &A, &B, &C);
	area = A * C / 2;
	printf("TRIANGULO: %.3lf\n", area);
	area = C * C *3.14159;
	printf("CIRCULO: %.3lf\n", area);
	area = (A + B) * C /2;
	printf("TRAPEZIO: %.3lf\n", area);
	area = B * B;
	printf("QUADRADO: %.3lf\n", area);
	area = A * B;
	printf("RETANGULO: %.3lf\n", area);

    return 0;
}
