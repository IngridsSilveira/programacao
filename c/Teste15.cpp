#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Fun��o Principal
int main (){
	
	//Definindo uma String
	string palavra;
	
	//Imprimindo na tela
	cout << "Digite uma palavra:\n";
	
	//Lendo uma string
	cin >> palavra;
	
	//Imprimindo uma vari�vel
	cout << "\n A palavra eh:\n" << palavra;
	//Pausa o programa
	system("pause");
	
	//Retorna valores
	return 0;
}
