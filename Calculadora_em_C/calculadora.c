#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;
    float numero1, numero2;
    float resultado, valor, porcentagem;
    float temperatura, perimetro, area, base, altura, raio, lado;
    float volume, juros, desconto, distancia, tempo, velocidade;
    float peso, imc;

    opcao = -1;

    while (opcao != 0)
    {
        printf("\n");
        printf("CALCULADORA\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Media aritmetica\n");
        printf("6 - Porcentagem\n");
        printf("7 - Regra de tres\n");
        printf("8 - Celsius para Fahrenheit\n");
        printf("9 - Fahrenheit para Celsius\n");
        printf("10 - Perimetro do quadrado\n");
        printf("11 - Area do quadrado\n");
        printf("12 - Area do retangulo\n");
        printf("13 - Area do circulo\n");
        printf("14 - Volume do cubo\n");
        printf("15 - Juros simples\n");
        printf("16 - Desconto\n");
        printf("17 - Velocidade media\n");
        printf("18 - Par ou impar\n");
        printf("19 - Comparacao entre dois numeros\n");
        printf("20 - IMC\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Digite o primeiro numero: ");
                scanf("%f", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%f", &numero2);
                resultado = numero1 + numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite o primeiro numero: ");
                scanf("%f", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%f", &numero2);
                resultado = numero1 - numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%f", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%f", &numero2);
                resultado = numero1 * numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Digite o primeiro numero: ");
                scanf("%f", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%f", &numero2);
                if (numero2 == 0)
                {
                    printf("Nao e possivel dividir por zero.\n");
                }
                else
                {
                    resultado = numero1 / numero2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 5:
                printf("Digite o primeiro numero: ");
                scanf("%f", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%f", &numero2);
                resultado = (numero1 + numero2) / 2;
                printf("Media: %.2f\n", resultado);
                break;

            case 6:
                printf("Digite o valor: ");
                scanf("%f", &valor);
                printf("Digite a porcentagem: ");
                scanf("%f", &porcentagem);
                resultado = valor * porcentagem / 100;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 7:
                printf("Digite o primeiro valor (A): ");
                scanf("%f", &numero1);
                printf("Digite o segundo valor (B): ");
                scanf("%f", &numero2);
                printf("Digite o terceiro valor (C): ");
                scanf("%f", &valor);
                if (numero1 == 0)
                {
                    printf("Nao e possivel usar zero como primeiro valor.\n");
                }
                else
                {
                    resultado = numero2 * valor / numero1;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 8:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = temperatura * 9 / 5 + 32;
                printf("Fahrenheit: %.2f\n", resultado);
                break;

            case 9:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = (temperatura - 32) * 5 / 9;
                printf("Celsius: %.2f\n", resultado);
                break;

            case 10:
                printf("Digite o lado do quadrado: ");
                scanf("%f", &lado);
                perimetro = lado * 4;
                printf("Perimetro: %.2f\n", perimetro);
                break;

            case 11:
                printf("Digite o lado do quadrado: ");
                scanf("%f", &lado);
                area = lado * lado;
                printf("Area: %.2f\n", area);
                break;

            case 12:
                printf("Digite a base do retangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do retangulo: ");
                scanf("%f", &altura);
                area = base * altura;
                printf("Area: %.2f\n", area);
                break;

            case 13:
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                area = 3.14 * raio * raio;
                printf("Area: %.2f\n", area);
                break;

            case 14:
                printf("Digite o lado do cubo: ");
                scanf("%f", &lado);
                volume = lado * lado * lado;
                printf("Volume: %.2f\n", volume);
                break;

            case 15:
                printf("Digite o capital: ");
                scanf("%f", &numero1);
                printf("Digite a taxa de juros (%%): ");
                scanf("%f", &numero2);
                printf("Digite o tempo: ");
                scanf("%f", &valor);
                juros = numero1 * numero2 * valor / 100;
                printf("Juros: %.2f\n", juros);
                break;

            case 16:
                printf("Digite o valor da compra: ");
                scanf("%f", &valor);
                printf("Digite o desconto (%%): ");
                scanf("%f", &desconto);
                resultado = valor * desconto / 100;
                printf("Valor do desconto: %.2f\n", resultado);
                resultado = valor - resultado;
                printf("Valor final: %.2f\n", resultado);
                break;

            case 17:
                printf("Digite a distancia: ");
                scanf("%f", &distancia);
                printf("Digite o tempo: ");
                scanf("%f", &tempo);
                if (tempo == 0)
                {
                    printf("Nao e possivel dividir por zero.\n");
                }
                else
                {
                    velocidade = distancia / tempo;
                    printf("Velocidade media: %.2f\n", velocidade);
                }
                break;

            case 18:
                printf("Digite um numero inteiro: ");
                scanf("%f", &numero1);
                if ((int)numero1 % 2 == 0)
                {
                    printf("O numero e par.\n");
                }
                else
                {
                    printf("O numero e impar.\n");
                }
                break;

            case 19:
                printf("Digite o primeiro numero: ");
                scanf("%f", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%f", &numero2);
                if (numero1 > numero2)
                {
                    printf("O primeiro numero e maior.\n");
                }
                else
                {
                    if (numero1 < numero2)
                    {
                        printf("O segundo numero e maior.\n");
                    }
                    else
                    {
                        printf("Os numeros sao iguais.\n");
                    }
                }
                break;

            case 20:
                printf("Digite seu peso (kg): ");
                scanf("%f", &peso);
                printf("Digite sua altura (m): ");
                scanf("%f", &altura);
                if (altura == 0)
                {
                    printf("A altura nao pode ser zero.\n");
                }
                else
                {
                    imc = peso / (altura * altura);
                    printf("IMC: %.2f\n", imc);

                    if (imc < 18.5)
                    {
                        printf("Classificacao: Abaixo do peso\n");
                    }
                    else
                    {
                        if (imc <= 24.9)
                        {
                            printf("Classificacao: Peso normal\n");
                        }
                        else
                        {
                            if (imc <= 29.9)
                            {
                                printf("Classificacao: Sobrepeso\n");
                            }
                            else
                            {
                                printf("Classificacao: Obesidade\n");
                            }
                        }
                    }
                }
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    return 0;
}
