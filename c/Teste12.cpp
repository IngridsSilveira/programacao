#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
int main(){
	
	//Definindo vari�vies
	int cont;
	
	//Tabuada
	for(cont = 1; cont <= 10; cont++){
		printf("\n 5 X %d = %d", cont, 5 * cont);
	}
	
	//Pausa o programa ap�s executar
	system("pause");
	
	//Retornando valores
	return 0;
} 
