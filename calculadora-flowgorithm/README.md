# Calculadora Universal — Flowgorithm

## Atividade
Projeto de iniciação em lógica de programação: desenvolvimento de uma calculadora com múltiplas operações matemáticas, geométricas e financeiras, implementada em **Flowgorithm**.

## Aluno
Guth Henry Riquelmes — Análise e Desenvolvimento de Sistemas (ADS)

## Objetivo
Implementar, em um único fluxograma, um programa de menu interativo que ofereça 20 funções de cálculo distintas, exercitando estruturas de decisão (`if/else`), repetição (`while`), entrada/saída de dados e operadores matemáticos.

## Descrição do funcionamento
O programa exibe um menu numerado de 0 a 20 e aguarda a digitação da opção desejada pelo usuário. A partir da opção escolhida, o fluxo é direcionado (via uma sequência de estruturas condicionais `if/else`) para o bloco correspondente, que solicita os dados necessários, realiza o cálculo e exibe o resultado formatado com duas casas decimais (`ToFixed`). Ao final de cada operação, o menu é reapresentado, e o laço se repete até que o usuário digite **0**, encerrando o programa.

## Relação das 20 funções implementadas
| Nº | Função |
|----|--------|
| 1 | Soma |
| 2 | Subtração |
| 3 | Multiplicação |
| 4 | Divisão (com tratamento de divisão por zero) |
| 5 | Média aritmética |
| 6 | Porcentagem |
| 7 | Regra de três simples |
| 8 | Conversão de Celsius para Fahrenheit |
| 9 | Conversão de Fahrenheit para Celsius |
| 10 | Perímetro do quadrado |
| 11 | **Área do quadrado** |
| 12 | **Área do retângulo** |
| 13 | **Área do círculo** |
| 14 | Volume do cubo |
| 15 | Juros simples |
| 16 | Desconto sobre valor de compra |
| 17 | Velocidade média (com tratamento de tempo zero) |
| 18 | Par ou ímpar |
| 19 | Comparação entre dois números |
| 20 | **Cálculo do IMC** (com classificação: abaixo do peso, peso normal, sobrepeso ou obesidade) |

## Funções obrigatórias
Este projeto atende às exigências de conter, entre as 20 funções:
- **Cálculo do IMC** — opção 20, incluindo classificação do resultado.
- **Cálculo de área** — opções 11 (quadrado), 12 (retângulo) e 13 (círculo).

## Como executar
1. Instale o [Flowgorithm](http://www.flowgorithm.org/download/) (gratuito).
2. Abra o Flowgorithm e carregue o arquivo `Calculadora_Universal_Flowgorithm.fprg`.
3. Clique em **Execute** (ou pressione F5) para rodar o fluxograma.
4. No console exibido, digite o número da operação desejada e siga as instruções na tela.
5. Para encerrar o programa, digite **0** quando o menu for exibido.

## Tecnologia
- **Ferramenta:** Flowgorithm (versão de arquivo 4.2)
- **Tipo de projeto:** Fluxograma de algoritmo / lógica de programação
