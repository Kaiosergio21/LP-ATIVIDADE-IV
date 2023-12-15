#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ContaBancaria {
    int numeroConta;
    char titular[50];
    double saldo;
    char tipoConta[20]; 
};


void depositar(struct ContaBancaria *conta, double valor) {
    conta->saldo += valor;
    printf("DepÃƒÂ³sito realizado com sucesso. Novo saldo: %.2f\n", conta->saldo);
}


void sacar(struct ContaBancaria *conta, double valor) {
    if (valor > conta->saldo) {
        printf("Saldo insuficiente. OperaÃƒÂ§ÃƒÂ£o cancelada.\n");
    } else {
        conta->saldo -= valor;
        printf("Saque realizado com sucesso. Novo saldo: %.2f\n", conta->saldo);
    }
}


void imprimirSaldo(struct ContaBancaria *conta) {
    printf("Saldo atual da conta: %.2f\n", conta->saldo);
}

int main() {
    
    struct ContaBancaria minhaConta;
    minhaConta.numeroConta = 12345;
    strcpy(minhaConta.titular, "Joao Silva");
    minhaConta.saldo = 1000.0;
    strcpy(minhaConta.tipoConta, "corrente");

    int opcao;
    double valor;

    do {
        
        printf("\n--- Menu ---\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Imprimir Saldo\n");
        printf("0. Sair\n");
        printf("Escolha a opÃƒÂ§ÃƒÂ£o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser depositado: ");
                scanf("%lf", &valor);
                depositar(&minhaConta, valor);
                break;
            case 2:
                printf("Digite o valor a ser sacado: ");
                scanf("%lf", &valor);
                sacar(&minhaConta, valor);
                break;
            case 3:
                imprimirSaldo(&minhaConta);
                break;
            case 0:
                printf("Saindo do programa. AtÃƒÂ© mais!\n");
                break;
            default:
                printf("OpÃƒÂ§ÃƒÂ£o invÃƒÂ¡lida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
