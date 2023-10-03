//Multiplo de un numero en una serie
#include <stdio.h>

int main(){
	
	int numero;
	for (numero=1; numero<=100; numero++){
	if (numero%3==0){
		printf("%d es multiplo de 3\n", numero);
	}
	else {
		printf("%d no es multiplo de 3\n", numero);
	}
	}
	
	return 0;
}
