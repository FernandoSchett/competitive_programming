// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
#include <string.h>

int main(){
	int cont, cont2, tam, num,menor,maior,diamantes;
	char frase[1010];
	
	scanf(" %d", &num);
	
	while(cont <num){
		cont2 = 0;
		scanf(" %[^\n]s", frase);
		tam = strlen(frase);
		while(cont2 < tam){
			if (frase[cont2] == '<' || frase[cont2] == '>'){
				if(frase[cont2] == '<'){
					menor++;
				}
				if(frase[cont2] == '>'){
					if(menor > 0 ) {
					diamantes++;
					menor--;
					}
				
				}	
			}	
	
		cont2++;
		}
		printf("%d\n", diamantes);
		diamantes = 0;
		cont ++;
		menor = 0;
		maior = 0;
	}
	return 0;
}
