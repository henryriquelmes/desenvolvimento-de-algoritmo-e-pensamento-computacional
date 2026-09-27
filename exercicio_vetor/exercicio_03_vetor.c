#include <stdio.h>

int main() {

    // Vetor com 20 posições
    int numeros[20];

    // Variáveis para realizar os cálculos
    int somaMultiplos3 = 0;
    int somaPares = 0;
    int contPares = 0;
    int contNegativos = 0;
    int contPositivos = 0;
    int maior, menor;

    float mediaPares;

    // Entrada dos 20 números
    printf("Digite 20 numeros inteiros:\n");

    for (int i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // O primeiro elemento será usado como maior e menor
    maior = numeros[0];
    menor = numeros[0];

    // Percorre o vetor para realizar as verificações
    for (int i = 0; i < 20; i++) {

        // Verifica se o numero e multiplo de 3
        if (numeros[i] % 3 == 0) {
            somaMultiplos3 = somaMultiplos3 + numeros[i];
        }

        // Verifica se o numero e par
        if (numeros[i] % 2 == 0) {
            somaPares = somaPares + numeros[i];
            contPares++;
        }

        // Verifica se o numero e positivo ou negativo
        // O zero nao entra em nenhuma das duas contagens
        if (numeros[i] > 0) {
            contPositivos++;
        }
        else if (numeros[i] < 0) {
            contNegativos++;
        }

        // Verifica o maior valor
        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        // Verifica o menor valor
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Calcula a media somente se existir algum numero par
    if (contPares > 0) {
        mediaPares = (float)somaPares / contPares;
    }
    else {
        mediaPares = 0;
    }

    // Exibe os resultados
    printf("\n===== RESULTADOS =====\n");

    printf("Soma dos multiplos de 3: %d\n", somaMultiplos3);
    printf("Media dos pares: %.2f\n", mediaPares);
    printf("Quantidade de negativos: %d\n", contNegativos);
    printf("Quantidade de positivos: %d\n", contPositivos);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    // Mostra todos os elementos do vetor
    printf("\n===== ELEMENTOS DO VETOR =====\n");

    for (int i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
