#include <stdio.h>
#include <stdlib.h>

//Fun��o Principal

int main (){
	
	//Definindo vari�veis
	int opcao;
	
	//Confere e v�lida a opcao
	while(opcao < 1 || opcao > 3){
		
		//Interface de Menu
		printf("Escolha uma opcao:");
		printf("\n1-Opcao 1");
		printf("\n2-Opcao 2");
		printf("\n3-Opcao 3\n");
		
		//Lendo a op��o
			scanf("%d", &opcao);
			
		switch(opcao){
			case 1:
				printf("\n Opcao 1 foi escolhida");
				break;
			case 2:
				printf("\n Opcao 2 foi escolhida");
				break;
			case 3:
				printf("\n Opcao 3 foi escolhida");
			default:
				printf("\n Opcao Invalida");
				break;
		}	
	}
	//Pausa o programa
	system("pause");
	
	//Retorna valores
	return 0;
}
