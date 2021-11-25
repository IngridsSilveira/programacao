#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	
	//Definindo
	bool a = true, b = false;
	
	//Se A for vdd
	if(a) {
		printf("\n A eh verdadeiro");
	}
	
	//Comparando o B
	if(b) {
		printf("\n B eh verdadeiro");
	} else {
		printf("\n B eh falso");
	}
	
	//Comparando uma falsidade
	if(!b){
		printf("\n B eh falso");
	}
	//Pausando
	system("pause");
	//Retornando
	return 0;
}
