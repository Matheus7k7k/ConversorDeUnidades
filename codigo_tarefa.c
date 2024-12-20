#include <stdio.h>

float converterParaMetros(float valor, int unidadeOrigem) {
    switch (unidadeOrigem) {
        case 1: // Micrômetro para metro
            return valor / 1e6;
        case 2: // Milímetro para metro
            return valor / 1000;
        case 3: // Centímetro para metro
            return valor / 100;
        case 4: // Metro (já está em metros)
            return valor;
        case 5: // Quilômetro para metro
            return valor * 1000;
        default:
            printf("Unidade de origem inválida.\n");
            return -1; // Retorna -1 para indicar erro
    }
}

float converterDeMetros(float valorEmMetros, int unidadeDestino) {
    switch (unidadeDestino) {
        case 1: // Metro para micrômetro
            return valorEmMetros * 1e6;
        case 2: // Metro para milímetro
            return valorEmMetros * 1000;
        case 3: // Metro para centímetro
            return valorEmMetros * 100;
        case 4: // Metro (mantém o mesmo valor)
            return valorEmMetros;
        case 5: // Metro para quilômetro
            return valorEmMetros / 1000;
        default:
            printf("Unidade de destino inválida.\n");
            return -1; // Retorna -1 para indicar erro
    }
}

void menuConversorDeComprimento() {
    int unidadeOrigem, unidadeDestino;
    float valor, valorEmMetros, valorConvertido;
    int sair = 0;

    while (!sair) {
        printf("\nMenu de Conversão de Metragens\n");
        printf("1 - Micrômetro\n");
        printf("2 - Milímetro\n");
        printf("3 - Centímetro\n");
        printf("4 - Metro\n");
        printf("5 - Quilômetro\n");
        printf("6 - Sair\n");

        printf("Escolha a unidade de origem (1-6): ");
        scanf("%d", &unidadeOrigem);

        if (unidadeOrigem == 6) {
            sair = 1;
            continue; // Sai do loop e encerra a conversão
        }

        printf("Escolha a unidade de destino (1-5): ");
        scanf("%d", &unidadeDestino);

        printf("Digite o valor na unidade de origem: ");
        scanf("%f", &valor);

        valorEmMetros = converterParaMetros(valor, unidadeOrigem);
        if (valorEmMetros == -1) {
            printf("Erro na conversão da unidade de origem.\n");
            continue;
        }

        valorConvertido = converterDeMetros(valorEmMetros, unidadeDestino);
        if (valorConvertido == -1) {
            printf("Erro na conversão para a unidade de destino.\n");
            continue;
        }
        
        printf("O valor convertido é: %.6f\n", valorConvertido);
    }
}

int main() {
    menuConversorDeComprimento();
    return 0;
}
