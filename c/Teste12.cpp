#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
int main(){
	
	//Definindo variávies
	int cont;
	
	//Tabuada
	for(cont = 1; cont <= 10; cont++){
		printf("\n 5 X %d = %d", cont, 5 * cont);
	}
	
	//Pausa o programa após executar
	system("pause");
	
	//Retornando valores
	return 0;
} 
