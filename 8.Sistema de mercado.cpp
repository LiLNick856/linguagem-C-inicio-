
#include <stdio.h>

int main() {
    int codigo, quantidade;
    float total_compra = 0.0;
    float preco_item = 0.0;

    printf("=== SISTEMA DE COMPRAS ===\n");
    printf("Instrucao: Digite o codigo 0 para encerrar a compra.\n");


    while (1) { 
        printf("\nMenu de Produtos:\n");
        printf("1 - Arroz (R$ 20.00)\n");
        printf("2 - Feijao (R$ 8.00)\n");
        printf("3 - Macarrao (R$ 5.00)\n");
        printf("0 - FINALIZAR COMPRA\n");
        
        printf("Digite o codigo do produto: ");
        scanf("%d", &codigo);
        

        if (codigo == 0) {
            break; 
        }

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);


        switch (codigo) {
            case 1:
                preco_item = 20.0;
                total_compra = total_compra + (preco_item * quantidade);
                break;
            case 2:
                preco_item = 8.0;
                total_compra = total_compra + (preco_item * quantidade);
                break;
            case 3:
                preco_item = 5.0;
                total_compra = total_compra + (preco_item * quantidade);
                break;
            default:
                printf("Codigo invalido! Nenhum produto adicionado.\n");
                break;
        }
    } 


    printf("\n=============================\n");
    printf("Subtotal da compra: R$ %.2f\n", total_compra);


    if (total_compra > 100.0) {
        float desconto = total_compra * 0.05;
        total_compra = total_compra - desconto;
        printf("Desconto aplicado (5%%): R$ %.2f\n", desconto);
    } else {
        printf("Sem direito a desconto (compras ate R$ 100.00).\n");
    }


    printf("Total final a pagar: R$ %.2f\n", total_compra);
    printf("=============================\n");

    return 0;
}
