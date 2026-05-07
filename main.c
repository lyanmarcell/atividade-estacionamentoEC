#include <stdio.h>
#include <string.h>

int main() {

    char placa[20];
    char tipoTexto[20];

    int tipo;

    float horas;
    float valorHora;
    float valorBase;
    float desconto = 0;
    float multa = 0;
    float valorFinal;

    printf("=== SISTEMA DE ESTACIONAMENTO ROTATIVO ===\n");

    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);

    printf("\nTipo do veiculo:\n");
    printf("1 - Carro\n");
    printf("2 - Moto\n");
    printf("3 - Caminhonete\n");
    printf("Escolha: ");
    scanf("%d", &tipo);

    switch(tipo) {

        case 1:
            valorHora = 5;
            strcpy(tipoTexto, "Carro");
            break;

        case 2:
            valorHora = 3;
            strcpy(tipoTexto, "Moto");
            break;

        case 3:
            valorHora = 8;
            strcpy(tipoTexto, "Caminhonete");
            break;

        default:
            printf("Tipo invalido!\n");
            return 0;
    }

    printf("Digite o tempo de permanencia (horas): ");
    scanf("%f", &horas);

    valorBase = valorHora * horas;

    if(horas > 5) {
        desconto = valorBase * 0.10;
    }

    if(horas > 10) {
        multa = 20;
    }

    valorFinal = valorBase - desconto + multa;

    printf("\n===== RESULTADO =====\n");

    printf("Placa: %s\n", placa);
    printf("Tipo: %s\n", tipoTexto);
    printf("Tempo de permanencia: %.1f horas\n", horas);

    printf("Valor Base: R$ %.2f\n", valorBase);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Multa: R$ %.2f\n", multa);

    printf("Valor Final: R$ %.2f\n", valorFinal);

    return 0;
}