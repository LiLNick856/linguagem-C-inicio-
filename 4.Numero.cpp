#include <stdio.h>

int main(){
	float numero;
	printf("Digite seu numero");
	   scanf("%f", &numero);
	if(numero > 0){
		printf("seu numero e positivo",numero);
	}
   else if (numero < 0) {
        printf("Seu numero e negativo: %.2f\n", numero);
    } 
	if(numero ==0){
	printf("seu nuemro e zero");
}

	return 0;
	
	
}
