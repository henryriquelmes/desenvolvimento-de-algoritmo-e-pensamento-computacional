
#include <stdio.h>

int main() {

    // Declaracao das variaveis
    float limite;
    float temperatura;
    float soma = 0;
    float media;
    float maior;
    float menor;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;
    int continuar = 1;
    int entradaValida;

    printf("=====================================\n");
    printf(" SISTEMA DE MONITORAMENTO INDUSTRIAL\n");
    printf("=====================================\n");

    // Solicita e valida o limite de temperatura
    do {

        printf("\nDigite o limite de temperatura (0 a 150 C): ");

        entradaValida = scanf("%f", &limite);

        // Limpa entradas invalidas
        while (getchar() != '\n');

        if (entradaValida != 1 || limite < 0 || limite > 150) {

            printf("Limite invalido! Digite um valor entre 0 e 150.\n");

            entradaValida = 0;

        }

    } while (entradaValida != 1);

    printf("\nLimite definido: %.2f C\n", limite);

    // Recebe as temperaturas enquanto o usuario desejar
    while (continuar == 1 && consecutivas < 3) {

        // Valida a temperatura informada
        do {

            printf("\nDigite a temperatura do sensor (-50 a 150 C): ");

            entradaValida = scanf("%f", &temperatura);

            // Limpa entradas invalidas
            while (getchar() != '\n');

            if (entradaValida != 1 || temperatura < -50 || temperatura > 150) {

                printf("Temperatura invalida! Digite um valor entre -50 e 150.\n");

                entradaValida = 0;

            }

        } while (entradaValida != 1);

        // Atualiza a quantidade e a soma
        quantidade++;
        soma += temperatura;

        // Inicializa a maior e a menor temperatura
        if (quantidade == 1) {

            maior = temperatura;
            menor = temperatura;

        } else {

            // Verifica a maior temperatura
            if (temperatura > maior) {

                maior = temperatura;

            }

            // Verifica a menor temperatura
            if (temperatura < menor) {

                menor = temperatura;

            }

        }

        // Verifica se a temperatura esta acima do limite
        if (temperatura > limite) {

            acimaLimite++;
            consecutivas++;

            printf("ALERTA: Temperatura acima do limite!\n");

        } else {

            // Zera a sequencia quando a temperatura esta normal
            consecutivas = 0;

            printf("Temperatura dentro do limite.\n");

        }

        // Encerra automaticamente apos 3 temperaturas consecutivas acima do limite
        if (consecutivas == 3) {

            printf("\nALERTA DE SEGURANCA!\n");
            printf("Tres temperaturas consecutivas acima do limite.\n");
            printf("Monitoramento encerrado automaticamente.\n");

        } else {

            // Pergunta se o usuario deseja continuar
            do {

                printf("\nDeseja registrar outra temperatura?\n");
                printf("1 - Sim\n");
                printf("0 - Nao\n");
                printf("Escolha: ");

                entradaValida = scanf("%d", &continuar);

                while (getchar() != '\n');

                if (entradaValida != 1 || (continuar != 0 && continuar != 1)) {

                    printf("Opcao invalida! Digite 1 ou 0.\n");

                    entradaValida = 0;

                }

            } while (entradaValida != 1);

        }

    }

    // Calcula a media das temperaturas
    media = soma / quantidade;

    // Exibe o relatorio final
    printf("\n=====================================\n");
    printf("          RELATORIO FINAL\n");
    printf("=====================================\n");

    printf("Limite de temperatura: %.2f C\n", limite);
    printf("Quantidade de leituras: %d\n", quantidade);
    printf("Media das temperaturas: %.2f C\n", media);
    printf("Maior temperatura: %.2f C\n", maior);
    printf("Menor temperatura: %.2f C\n", menor);
    printf("Temperaturas acima do limite: %d\n", acimaLimite);

    printf("=====================================\n");
    printf("Monitoramento finalizado.\n");

    return 0;
}
