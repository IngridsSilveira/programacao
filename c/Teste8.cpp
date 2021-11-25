#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
int main(){
	
	//Definindo variávies
	int a = 25;
	
	//Conectivo Lógico E (AND)
	if (a > 5 && a < 15){
		printf("\n a variavel 'a' esta entre 5 e 15");
	}
	
	//Conectivo Lógico OU (OR)
	if(a > 5 || a < 15){
		printf("\n a variavel 'a' eh maior que 5 ou 15");
	}
	
	//Misturando Conectivos
	if( (a > 5 && a < 15) || a == 25 ){
		printf("\n a variavel 'a' esta entre 5 e 15 ou ela vale 25");
	}
	
	//Pausa o programa após executar
	system("pause");
	
	//Retornando valores
	return 0;
} 
