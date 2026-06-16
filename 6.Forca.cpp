#include <stdio.h>

int main() {
    char secreta[20]; 
    char chute;
  
    char mascara[20] = "_______________";
    int vidas = 10;
    int ganhou = 0; 
    printf("Qual vai ser a palavra para ser usada na forca? ");
    scanf("%s", secreta);
    
 
    int tam = 0;
    while(secreta[tam] != '\0') {
        mascara[tam] = '_';
        tam++;
    }
    mascara[tam] = '\0'; 
    
    while(vidas > 0) {
        
        printf("\nPalavra atual: %s\n", mascara);
        printf("Vidas restantes: %d\n", vidas);
        
        printf("Qual vai ser o seu palpite de letra? ");
        scanf(" %c", &chute); 

        int i = 0;
        int acertou = 0;

       
        while (secreta[i] != '\0') {
            if (secreta[i] == chute) {
                mascara[i] = chute; 
                acertou = 1;       
            }
            i++; 
        }

        if (acertou == 0) {
            printf("Voce errou! A letra %c nao esta na palavra.\n", chute);
            vidas--; 
        } else {
            printf("Muito bem! Voce achou uma letra.\n");
        }

 
        int j = 0;
        int ainda_tem_tracinho = 0;

        while (mascara[j] != '\0') {
            if (mascara[j] == '_') {
                ainda_tem_tracinho = 1; 
            }
            j++;
        }

        
        if (ainda_tem_tracinho == 0) {
            ganhou = 1;
            break;    
        }

    } 

    if (ganhou == 1) {
        printf("\nPARABENS! Voce descobriu a palavra secreta: %s\n", secreta);
    } else {
        printf("\nGAME OVER! Suas vidas acabaram. A palavra era: %s\n", secreta);
    }

    return 0;
}
