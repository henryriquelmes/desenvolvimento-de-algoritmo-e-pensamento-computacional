#include <stdio.h>

int main() {
    FILE *arquivo;
    int opcao;
    int contador;
    char nome[100];
    char codigo[50];
    char localizacao[100];
    char linha[100];

    do {
        // Menu principal
        printf("\n===== CADASTRO DE EQUIPAMENTOS =====\n");
        printf("1 - Cadastrar equipamento\n");
        printf("2 - Listar equipamentos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpa o Enter que sobrou do scanf para o fgets funcionar

        if (opcao == 1) {
            // Pedindo os dados ao usuario
            printf("\nNome do equipamento: ");
            fgets(nome, sizeof(nome), stdin);

            printf("Codigo de identificacao: ");
            fgets(codigo, sizeof(codigo), stdin);

            printf("Localizacao: ");
            fgets(localizacao, sizeof(localizacao), stdin);

            // Abre no modo "a" para NAO apagar os cadastros anteriores
            arquivo = fopen("equipamentos.txt", "a");

            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo.\n");
                return 1;
            }

            // Grava os dados (cada um em uma linha, pois o fgets guarda o \n)
            fprintf(arquivo, "%s", nome);
            fprintf(arquivo, "%s", codigo);
            fprintf(arquivo, "%s", localizacao);

            fclose(arquivo);

            printf("Equipamento cadastrado com sucesso!\n");
        }
        else if (opcao == 2) {
            // Abre no modo "r" para apenas ler
            arquivo = fopen("equipamentos.txt", "r");

            if (arquivo == NULL) {
                printf("\nNenhum equipamento cadastrado ainda.\n");
            }
            else {
                printf("\n===== EQUIPAMENTOS CADASTRADOS =====\n");
                contador = 0;

                // Le linha por linha ate o fim do arquivo
                while (fgets(linha, sizeof(linha), arquivo) != NULL) {
                    if (contador % 3 == 0) {
                        printf("\n--- Equipamento %d ---\n", contador / 3 + 1);
                        printf("Nome: %s", linha);
                    }
                    else if (contador % 3 == 1) {
                        printf("Codigo: %s", linha);
                    }
                    else {
                        printf("Localizacao: %s", linha);
                    }
                    contador++;
                }

                fclose(arquivo);
            }
        }
        else if (opcao == 3) {
            printf("\nEncerrando o programa...\n");
        }
        else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
