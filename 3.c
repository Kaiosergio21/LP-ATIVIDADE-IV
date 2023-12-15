#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
struct Produto {
    char nome[50];
    double preco;
    int quantidadeEstoque;
};

 
double calcularValorTotal(struct Produto *produto) {
    return produto->preco * produto->quantidadeEstoque;
}

 
void realizarCompra(struct Produto *produto, int quantidadeComprada) {
    if (quantidadeComprada > 0) {
        produto->quantidadeEstoque += quantidadeComprada;
        printf("Compra realizada com sucesso. Quantidade em estoque: %d\n", produto->quantidadeEstoque);
    } else {
        printf("Quantidade invÃ¡lida. Compra cancelada.\n");
    }
}

 
void consultarEstoque(struct Produto *produto) {
    printf("Produto: %s\n", produto->nome);
    printf("PreÃ§o: %.2f\n", produto->preco);
    printf("Quantidade em estoque: %d\n", produto->quantidadeEstoque);
    printf("Valor total em estoque: %.2f\n", calcularValorTotal(produto));
}

int main() {
     
    struct Produto meuProduto;
    strcpy(meuProduto.nome, "Produto A");
    meuProduto.preco = 10.99;
    meuProduto.quantidadeEstoque = 50;

    int opcao, quantidade;

    do {
         
        printf("\n--- Menu ---\n");
        printf("1. Realizar uma compra\n");
        printf("2. Consultar estoque\n");
        printf("3. Sair do programa\n");
        printf("Escolha a opÃ§Ã£o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade a ser comprada: ");
                scanf("%d", &quantidade);
                realizarCompra(&meuProduto, quantidade);
                break;
            case 2:
                consultarEstoque(&meuProduto);
                break;
            case 3:
                printf("Saindo do programa. AtÃ© mais!\n");
                break;
            default:
                printf("OpÃ§Ã£o invÃ¡lida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
