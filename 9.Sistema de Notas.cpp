#include <stdio.h>
int main(){
    float n1, n2, media;
    int numero, i;
    printf("digite o numero de alunos");
    scanf("%d" ,&numero);
for (i = 1; i <= numero; i++) {
 
    printf("Digite as notas do aluno %d:\n", i); 
    
    printf("Nota 1 = ");
    scanf("%f", &n1);
    
    printf("Nota 2 = ");
    scanf("%f", &n2);
    
    media = (n1 + n2) / 2;
    printf("A media desse aluno e %.2f\n", media);
	if(media >= 7){
		printf("Aluno aprovado");
	}
	else if ( media >= 5){
		printf("Aluno de recuperaçao");
	}
	else{
		printf("aluno reprovado");
	}
}
    			

    
    return 0;
   
}

