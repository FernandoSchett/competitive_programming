// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
#include <string.h>

int main(){
	int alunos = 0, epr=0, ehd=0, intrusos=0;
	char presenca[1000];
	const char s[2] = " ";
    char *sigla;
	
	while(scanf(" %d", &alunos) != EOF){
		while(alunos){
			scanf(" %[^\n]s", presenca);
			
			sigla = strtok(presenca, s);
			sigla = strtok(NULL, s);
	
			
			if(!strcmp(sigla, "EPR")){
				epr++;
			}else{
				
				if(!strcmp(sigla, "EHD")){
					ehd++;
				}else{
					intrusos++;
				}
				
			}
	
			alunos--;
		}
		
		printf("EPR: %d\n", epr);
		printf("EHD: %d\n", ehd);
		printf("INTRUSOS: %d\n", intrusos);
		intrusos = 0;
		epr = 0;
		ehd = 0;
		}
}



