#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
int main(){
	
	//Definindo vari�vies
	int a = 5;
	char b = 't';
	
	//C�digo de exemplo com IF
	if(a == 1){
		printf("\n Opcao escolhida: 1");
	} else if (a == 2){
		printf("\n Opcao escolhida: 2");
	} else if (a == 3){
		printf("\n Opcao escolhida: 3");
	} else {
		printf("\n Opcao Invalida");
	}
	
	// O mesmo c�digo, com SWITCH
	switch(a) {
		case 1:
			printf("\n Opcao escolhida: 1");
			break;
		case 2:
			printf("\n Opcao escolhida: 2");
			break;
		case 3:
			printf("\n Opcao escolhida: 3");
			break;
		default:
			printf("\n Opcao Invalida");
			break;			
	}
	
		//Switch com char
		switch(b){
			case 'x':
				printf("\n A letra eh x");
				break;
			default:
				printf("\n Opcao Invalida");
				break;
		}
	//Pausa o programa ap�s executar
	system("pause");
	
	//Retornando valores
	return 0;
} 
