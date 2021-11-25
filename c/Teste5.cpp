#include <stdio.h>
#include <stdlib.h>

//Incio do programa
int main(){
 
 //Definindo
 int a = 5, b = 10, c = 15;
 char d = 'x';
 //Maior
 if (a > 2) {
 	printf("\n %d eh maior que 2", a);
 }

//Maior ou igual
if(c >=b) {
	printf("\n %d eh maior ou igual a %d", c, b);
}

//Menor
if(a < 10){
	printf("\n %d eh menor que 10", a);
}

//Menor ou igual
if(a <= 10) {
	printf("\n %d eh menor ou igual a 10", a);
}

//Diferente
if(c != 10) {
	printf("\n %d nao eh 10", c);
}

//Com char
if(d !='a'){
	printf("\n %c nao eh a", d);
}
//Pausando 	
	system("pause");
//Retornado valores
return 0;	
}
