// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
#include <string.h>

int main(){
	int tam, i = 0, resultado = 1,cont = 0;       

	char equacao[1000]; 		

	while(scanf(" %s", equacao) != EOF ){
		tam = strlen(equacao);
		
		while (cont < tam){
			
			if(equacao[cont] == ')' || equacao[cont] == '(' ){
				if(equacao[cont] == ')' ){
					if(i  == 0){
						resultado = 0;
					}
					else{
						i--;
						//printf("%d\n", i);
					}
				}
				if(equacao[cont] == '('){
					i++;
				//	printf("%d\n", i);
				}	
			}
			cont++;
		}
			
		if(resultado == 1 && i == 0){
			printf("correct\n");
		}else{
			printf("incorrect\n");
		}
		
		cont = 0;
		resultado = 1;
		i = 0;
	}
	return 0;	
}
