#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fun��o principal do programa
int main(){
	
	//Respons�vel por n�meros aleat�rios
	srand( (unsigned)time (NULL));
	
	//Vari�vel que recebe o resto da divis�o do n:3
	int aleatorio = rand() % 3;
	
	//Vari�vel que recebe o resto da divis�o do n:5
	int aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf("%d", aleatorioSegundo);
	
	aleatorioSegundo = (rand () % 5) + 1;
	
	printf("%d", aleatorioSegundo);
	
	//Pausa o programa ap�s executar
	system("pause");
	
	//Retornando valores
	return 0;
} 
