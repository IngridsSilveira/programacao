#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função principal do programa
int main(){
	
	//Responsável por números aleatórios
	srand( (unsigned)time (NULL));
	
	//Variável que recebe o resto da divisão do n:3
	int aleatorio = rand() % 3;
	
	//Variável que recebe o resto da divisão do n:5
	int aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf("%d", aleatorioSegundo);
	
	aleatorioSegundo = (rand () % 5) + 1;
	
	printf("%d", aleatorioSegundo);
	
	//Pausa o programa após executar
	system("pause");
	
	//Retornando valores
	return 0;
} 
