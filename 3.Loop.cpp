#include <stdio.h>

int main() {
    int i, num, mul;
    
    num = 5; // Escolha o número da tabuada aqui
    
    // O segredo está em abrir a chave { aqui
    for (i = 1; i <= 10; i++) {
        mul = num * i; 
        
        // O printf PRECISA estar aqui dentro para rodar 10 vezes
        printf("%d x %d = %d\n", num, i, mul); 
    } 
    // E fechar a chave } depois do printf
    
    return 0;
}
