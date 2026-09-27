# Exercício 03 – Vetor (Nível Difícil)

## Identificação do estudante
- **Nome:** Guth Henry Riquelmes
- **Curso:** Análise e Desenvolvimento de Sistemas (ADS)
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Linguagem utilizada:** C

## Objetivo da atividade
O objetivo deste exercício é praticar o uso de **vetores (arrays)** na linguagem C, aplicando estruturas de repetição (`for`) para preencher e percorrer o vetor, e estruturas condicionais (`if`/`else`) para processar as informações armazenadas.

O programa deve:
1. Ler 20 números inteiros e armazená-los em um vetor.
2. Calcular e exibir a soma dos elementos que são múltiplos de 3.
3. Calcular e exibir a média dos elementos que são pares.
4. Informar quantos números são negativos e quantos são positivos.
5. Determinar e exibir o maior e o menor valor do vetor.
6. Mostrar todos os elementos do vetor ao final.

## Lógica utilizada
- Um vetor `numeros[20]` é declarado para armazenar os números digitados pelo usuário.
- Um primeiro laço `for` é usado para **ler e armazenar** os 20 números no vetor.
- As variáveis `maior` e `menor` são inicializadas com o valor da primeira posição do vetor (`numeros[0]`), servindo como ponto de partida para a comparação.
- Um segundo laço `for` percorre todo o vetor **uma única vez**, e dentro dele são feitas todas as verificações com `if`:
  - Se o número é múltiplo de 3 (`numeros[i] % 3 == 0`), ele é somado a `somaMultiplos3`.
  - Se o número é par (`numeros[i] % 2 == 0`), ele é somado a `somaPares` e a contagem `contPares` é incrementada (usada depois para calcular a média).
  - Se o número é maior que zero, incrementa `contPositivos`; se for menor que zero, incrementa `contNegativos`. **O valor 0 não entra em nenhuma das duas contagens**, pois não é nem positivo nem negativo.
  - Comparações atualizam `maior` e `menor` sempre que um valor maior ou menor é encontrado.
- Antes de exibir a média dos pares, o programa **verifica se `contPares > 0`**. Isso evita divisão por zero caso nenhum número par tenha sido digitado; nesse caso, a média recebe o valor 0.
- Por fim, um terceiro laço `for` percorre o vetor novamente apenas para exibir todos os elementos digitados.

## Instruções para compilar e executar

### Usando o terminal (GCC)
1. Salve o arquivo como `exercicio_03_vetor.c`.
2. Abra o terminal na pasta onde o arquivo está salvo.
3. Compile o programa com o comando:
   ```
   gcc exercicio_03_vetor.c -o exercicio_03_vetor
   ```
4. Execute o programa:
   - No Windows:
     ```
     exercicio_03_vetor.exe
     ```
   - No Linux/Mac:
     ```
     ./exercicio_03_vetor
     ```

### Usando uma IDE (Code::Blocks, Dev-C++, VS Code, etc.)
1. Abra o arquivo `exercicio_03_vetor.c` na IDE de sua preferência.
2. Clique em **Build/Compile** e depois em **Run/Execute** (ou use o atalho da própria IDE).

## Exemplo de entrada e saída

**Entrada (20 números digitados pelo usuário):**
```
3 6 -1 8 0 15 -7 2 9 4 12 -3 5 6 -8 10 1 -2 7 14
```

**Saída esperada:**
```
===== RESULTADOS =====
Soma dos multiplos de 3: 66
Media dos pares: 5.30
Quantidade de negativos: 5
Quantidade de positivos: 14
Maior valor: 15
Menor valor: -8

===== ELEMENTOS DO VETOR =====
3 6 -1 8 0 15 -7 2 9 4 12 -3 5 6 -8 10 1 -2 7 14
```

> Observação: o número `0` foi digitado propositalmente neste exemplo para comprovar que ele não é contado nem como positivo nem como negativo (total de negativos + positivos = 19, restando o 0 de fora).
