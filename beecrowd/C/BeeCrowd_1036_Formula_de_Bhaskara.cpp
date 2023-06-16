// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
#include <math.h>
 
int main(){
	double B, A, C , D, X, XX;
	
	scanf(" %lf %lf %lf", &A, &B, &C);
	
	if(A != 0){
		//delta
		D = (B*B) - (4*A*C); 
		if(D >= 0){
			D = sqrt(D);
			//primeiro x
			X = (-B + D) / (2*A); 
			//segundo x
			XX = (-B - D) / (2*A);
			printf("R1 = %.5lf\n", X);
			printf("R2 = %.5lf\n", XX);
		}else{
			printf("Impossivel calcular\n");	
		}
	}else{	
		printf("Impossivel calcular\n");	
	}

	return 0;
}
