#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	cout << "Informe a tabuada que voce deseja" << endl;
	
	int n = 0;
	cin >> n;
	
	for(int i = 1; i<=10; i++){
		cout << i << " x " << n << " = " << i*n << endl;
	}
	system("pause");
	return 0;
}
