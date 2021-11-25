#include <iostream>
#include <stdlib.h>

/*====================
		Ingrid
====================*/		

using namespace std;

int main(){
	
	int num = 10;
	char c = 's';
	
	{
		cout << "Estamos dentro de um outro bloco de instrucoes" << endl;
		
		double dinheiro = 4.99;
		cout << "O valor da variavel 'dinheiro' eh: " << dinheiro << endl;
	}
	
	cout << "Informe um numero: " << endl;
	cin >> num; 
	
	if(num==50){
		cout << "Esta frase foi impressa de um bloco de instrucoes IF" << endl;
	}else{
		cout << "Esta frase foi impressa de um bloco de instrucoes ELSE" << endl;
	}
	
	system("pause");
	return 0;
}
