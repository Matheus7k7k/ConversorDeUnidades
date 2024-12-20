#include <stdio.h>

float converterParaMetros(float valor, int unidadeOrigem) {
    switch (unidadeOrigem) {
        case 1: // Micr�metro para metro
            return valor / 1e6;
        case 2: // Mil�metro para metro
            return valor / 1000;
        case 3: // Cent�metro para metro
            return valor / 100;
        case 4: // Metro (j� est� em metros)
            return valor;
        case 5: // Quil�metro para metro
            return valor * 1000;
        default:
            printf("Unidade de origem inv�lida.\n");
            return -1; // Retorna -1 para indicar erro
    }
}

float converterDeMetros(float valorEmMetros, int unidadeDestino) {
    switch (unidadeDestino) {
        case 1: // Metro para micr�metro
            return valorEmMetros * 1e6;
        case 2: // Metro para mil�metro
            return valorEmMetros * 1000;
        case 3: // Metro para cent�metro
            return valorEmMetros * 100;
        case 4: // Metro (mant�m o mesmo valor)
            return valorEmMetros;
        case 5: // Metro para quil�metro
            return valorEmMetros / 1000;
        default:
            printf("Unidade de destino inv�lida.\n");
            return -1; // Retorna -1 para indicar erro
    }
}

void menuConversorDeComprimento() {
    int unidadeOrigem, unidadeDestino;
    float valor, valorEmMetros, valorConvertido;
    int sair = 0;

    while (!sair) {
        printf("\nMenu de Convers�o de Metragens\n");
        printf("1 - Micr�metro\n");
        printf("2 - Mil�metro\n");
        printf("3 - Cent�metro\n");
        printf("4 - Metro\n");
        printf("5 - Quil�metro\n");
        printf("6 - Sair\n");

        printf("Escolha a unidade de origem (1-6): ");
        scanf("%d", &unidadeOrigem);

        if (unidadeOrigem == 6) {
            sair = 1;
            continue; // Sai do loop e encerra a convers�o
        }

        printf("Escolha a unidade de destino (1-5): ");
        scanf("%d", &unidadeDestino);

        printf("Digite o valor na unidade de origem: ");
        scanf("%f", &valor);

        valorEmMetros = converterParaMetros(valor, unidadeOrigem);
        if (valorEmMetros == -1) {
            printf("Erro na convers�o da unidade de origem.\n");
            continue;
        }

        valorConvertido = converterDeMetros(valorEmMetros, unidadeDestino);
        if (valorConvertido == -1) {
            printf("Erro na convers�o para a unidade de destino.\n");
            continue;
        }
        
        printf("O valor convertido �: %.6f\n", valorConvertido);
    }
}

int main() {
    menuConversorDeComprimento();
    return 0;
}
