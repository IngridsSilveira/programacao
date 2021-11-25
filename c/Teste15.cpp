#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função Principal
int main (){
	
	//Definindo uma String
	string palavra;
	
	//Imprimindo na tela
	cout << "Digite uma palavra:\n";
	
	//Lendo uma string
	cin >> palavra;
	
	//Imprimindo uma variável
	cout << "\n A palavra eh:\n" << palavra;
	//Pausa o programa
	system("pause");
	
	//Retorna valores
	return 0;
}
