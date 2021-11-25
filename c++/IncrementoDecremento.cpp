#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i = 0;
	int i2 = 0;
	
	cout << "Operador de incremento" << endl;
	cout << "Pre = " << ++i << endl;//Pre-incremento
	cout << "Pos = " << i2++ << endl;//Pos-incremento
	cout << "Pos = " << i2 << endl;
	
	cout << endl;
	
	cout <<"Operador de decremento" << endl;
	
	cout <<"Pre = " << --i << endl;//Pre-decremento
	cout <<"Pos = " << i2-- << endl;//Pos-decremento
	cout <<"Pos = " << i2 << endl;
	system("pause");
	return 0;
}
