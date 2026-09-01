# Calculadora Completa em C

## 1. Descrição do Projeto

Este projeto consiste em uma calculadora desenvolvida na linguagem C, criada a partir da conversão de um fluxograma originalmente construído no software **Flowgorithm**. O programa reúne 20 operações diferentes, envolvendo cálculos matemáticos básicos, conversões de unidades, geometria, matemática financeira, física básica e saúde (IMC), tudo organizado em um único menu interativo.

O código foi escrito com foco em simplicidade, utilizando apenas conceitos básicos da linguagem C, adequados para quem está no início dos estudos de lógica de programação.

## 2. Objetivo da Calculadora

O objetivo principal do projeto é aplicar, na prática, os conceitos fundamentais de lógica de programação e da linguagem C, como variáveis, entrada e saída de dados, estruturas condicionais e estruturas de repetição, construindo um programa funcional que reproduza fielmente a lógica definida no fluxograma original, sem adicionar ou remover operações.

## 3. Funcionalidades Implementadas

- Exibição de um menu principal com todas as operações disponíveis;
- Leitura da opção escolhida pelo usuário;
- Execução do cálculo correspondente à opção selecionada;
- Exibição do resultado formatado com duas casas decimais;
- Retorno automático ao menu após cada operação;
- Encerramento do programa por meio da opção "0 - Sair";
- Tratamento básico de erros (divisão por zero, valores inválidos para determinados cálculos e opções de menu inexistentes).

## 4. Relação das 20 Funções (Operações) Desenvolvidas

| Nº | Operação | Descrição |
|----|----------|-----------|
| 1 | Soma | Soma de dois números |
| 2 | Subtração | Subtração entre dois números |
| 3 | Multiplicação | Multiplicação entre dois números |
| 4 | Divisão | Divisão entre dois números, com verificação de divisão por zero |
| 5 | Média aritmética | Média entre dois números |
| 6 | Porcentagem | Cálculo de porcentagem sobre um valor |
| 7 | Regra de três | Cálculo de regra de três simples (A, B e C) |
| 8 | Celsius para Fahrenheit | Conversão de temperatura |
| 9 | Fahrenheit para Celsius | Conversão de temperatura |
| 10 | Perímetro do quadrado | Cálculo do perímetro a partir do lado |
| 11 | Área do quadrado | Cálculo da área a partir do lado |
| 12 | Área do retângulo | Cálculo da área a partir da base e da altura |
| 13 | Área do círculo | Cálculo da área a partir do raio |
| 14 | Volume do cubo | Cálculo do volume a partir do lado |
| 15 | Juros simples | Cálculo de juros a partir de capital, taxa e tempo |
| 16 | Desconto | Cálculo do valor do desconto e do valor final da compra |
| 17 | Velocidade média | Cálculo da velocidade a partir de distância e tempo |
| 18 | Par ou ímpar | Verificação se um número é par ou ímpar |
| 19 | Comparação entre dois números | Verificação de qual número é maior, menor ou se são iguais |
| 20 | IMC | Cálculo do Índice de Massa Corporal e sua classificação |
| 0 | Sair | Encerra o programa |

## 5. Bibliotecas Utilizadas

- **`stdio.h`**: biblioteca padrão de entrada e saída, utilizada para todas as leituras (`scanf`) e exibições de dados (`printf`) no programa.
- **`math.h`**: biblioteca matemática da linguagem C, incluída no projeto para disponibilizar funções matemáticas caso sejam necessárias. As operações da calculadora utilizam apenas operadores aritméticos básicos (`+`, `-`, `*`, `/`, `%`), mas a biblioteca foi mantida no cabeçalho do programa por ser uma boa prática ao trabalhar com cálculos matemáticos em C.

## 6. Organização do Código

O programa foi estruturado da seguinte forma:

1. **Inclusão das bibliotecas** (`stdio.h` e `math.h`);
2. **Função `main()`**: ponto de entrada do programa, onde todo o código está concentrado, sem uso de funções criadas pelo usuário, structs ou ponteiros;
3. **Declaração das variáveis**: todas as variáveis utilizadas nos cálculos (números, resultados, medidas geométricas, valores financeiros, etc.) são declaradas no início da função `main()`;
4. **Laço de repetição principal (`while`)**: mantém o programa em execução, exibindo o menu repetidamente, até que o usuário digite a opção "0";
5. **Estrutura de seleção (`switch...case`)**: verifica qual opção foi digitada e direciona o programa para o bloco de código correspondente;
6. **Blocos de cada operação**: cada `case` contém a leitura dos dados necessários (`scanf`), o cálculo (fórmula correspondente) e a exibição do resultado (`printf`);
7. **Encerramento**: quando o usuário escolhe a opção "0", o programa exibe a mensagem "Programa encerrado." e finaliza o laço `while`.

## 7. Conceitos de Programação Utilizados

- **Entrada e saída de dados**: utilização da função `scanf()` para capturar os valores digitados pelo usuário e da função `printf()` para exibir mensagens, menus e resultados na tela.
- **Estruturas condicionais**: uso do `switch...case` para direcionar a execução conforme a opção escolhida no menu, e uso de `if...else` dentro de alguns casos específicos (como verificação de divisão por zero, classificação do IMC, comparação entre números e verificação de par ou ímpar).
- **Estruturas de repetição**: uso do laço `while` para manter o menu sendo exibido repetidamente, permitindo que o usuário realize quantas operações desejar antes de encerrar o programa.
- **Funções**: o programa utiliza apenas a função `main()`, que é a função principal obrigatória em todo programa em C, sem a criação de funções adicionais, mantendo a solução simples e direta.
- **Utilização da biblioteca `math.h`**: incluída no projeto como parte das boas práticas ao lidar com cálculos matemáticos em C, ainda que os cálculos implementados utilizem apenas operadores aritméticos básicos da linguagem.
- **Tratamento básico de erros**: verificações simples com `if` para evitar divisões por zero (nas opções de divisão, regra de três, velocidade média) e para evitar cálculos inválidos (altura igual a zero no IMC), além de uma opção `default` no `switch` para tratar opções de menu inválidas.

## 8. Instruções para Compilação e Execução

### Pré-requisitos
É necessário ter um compilador de C instalado, como o **GCC**.

### Compilando o programa
Abra o terminal na pasta onde o arquivo `calculadora_completa.c` está salvo e execute:

```bash
gcc calculadora_completa.c -o calculadora -lm
```

### Executando o programa

- No Linux/macOS:
```bash
./calculadora
```

- No Windows (usando o executável gerado):
```bash
calculadora.exe
```

O programa também pode ser compilado e executado em ambientes online, como o [Replit](https://replit.com/) ou o [OnlineGDB](https://www.onlinegdb.com/), bastando colar o código-fonte e executar.

## 9. Exemplos de Uso

### Exemplo 1 — Soma (Opção 1)
```
Digite a opcao desejada: 1
Digite o primeiro numero: 5
Digite o segundo numero: 3
Resultado: 8.00
```

### Exemplo 2 — Divisão por zero (Opção 4)
```
Digite a opcao desejada: 4
Digite o primeiro numero: 10
Digite o segundo numero: 0
Nao e possivel dividir por zero.
```

### Exemplo 3 — IMC (Opção 20)
```
Digite a opcao desejada: 20
Digite seu peso (kg): 70
Digite sua altura (m): 1.75
IMC: 22.86
Classificacao: Peso normal
```

### Exemplo 4 — Encerrando o programa (Opção 0)
```
Digite a opcao desejada: 0
Programa encerrado.
```

## 10. Identificação do Estudante

- **Nome**: Guth Henry Riquelmes
- **Curso**: Análise e Desenvolvimento de Sistemas (ADS)
- **Projeto**: Conversão de calculadora do Flowgorithm para a linguagem C
