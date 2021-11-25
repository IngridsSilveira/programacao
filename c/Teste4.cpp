#include <stdio.h>
#include <stdlib.h>

int main (){
	int a = 4, opcao = 3;
	float b = 2.5;
	char c = 'x';
	
	//Condicional Simples
	if(a == 4) {
		printf("\n A variavel a = 4");
	}
	if(b == 2.5) {
		printf("\n A variavel b = 2.5");
	}
	if(c == 'x') {
		printf("\n A variavel c = letra x");
	}
	
	//Número par ou ímpar
	if(a % 2 == 1){
		printf("\n A variavel a eh impar");
		}else {
			printf("\n A variavel a eh par");
		}
		
	
	
	//Condicional composta
		if(opcao ==1){
			printf("\n A opcao = 1");
		}
		else if (opcao == 2) {
			printf("\n A opcao = 2");
		} else{
			printf("\n A opcao nao eh igual a 1 e nem 2");
		}
		
		
	//Pausando
	system("pause");
	
	//Retornando valores
	return 0;
}
