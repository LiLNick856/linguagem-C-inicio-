#include <stdio.h>


int main() {
    
    int opcao;
    float total = 0.0;

    printf("=== BEM-VINDO AO SISTEMA DE PEDIDOS ===\n\n");

    do {
        
        printf("Escolha uma opção:\n");
        printf("1 - Hambúrguer (R$ 10,00)\n");
        printf("2 - Pizza (R$ 15,00)\n");
        printf("3 - Refrigerante (R$ 5,00)\n");
        printf("0 - Finalizar Pedido\n");
        printf("Sua opção: ");
        scanf("%d", &opcao);

        
        if (opcao == 1) {
            total += 10.0;
            printf("-> Hambúrguer adicionado!\n\n");
        } 
        else if (opcao == 2) {
            total += 15.0;
            printf("-> Pizza adicionada!\n\n");
        } 
        else if (opcao == 3) {
            total += 5.0;
            printf("-> Refrigerante adicionado!\n\n");
        } 
        else if (opcao == 0) {
            printf("-> Processando fechamento da conta...\n\n");
        } 
        else {
            printf("-> Opção inválida! Tente novamente.\n\n");
        }

    } while(opcao != 0);
    
    
    printf("=====================================\n");
    printf("Pedido finalizado com sucesso!\n");
    printf("Total a pagar: R$ %.2f\n", total);
    printf("=====================================\n");

    return 0;
}
