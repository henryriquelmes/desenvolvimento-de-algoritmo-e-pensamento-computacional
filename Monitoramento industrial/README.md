# Sistema de Monitoramento Industrial de Temperatura

## 1. Identificação

- **Aluno:** Guth Henry Riquelmes
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Professora:** Profa. Karla Sartin
- **Título do projeto:** Sistema de Monitoramento Industrial de Temperatura

## 2. Objetivo

O programa tem como objetivo simular um sistema de monitoramento de temperatura em um ambiente industrial. A proposta é resolver o problema de acompanhar leituras de sensores de temperatura, comparando-as com um limite de segurança definido pelo usuário, identificando situações de risco (temperaturas acima do limite) e gerando um relatório estatístico ao final do monitoramento. O sistema também simula um mecanismo de segurança que interrompe automaticamente o monitoramento caso o limite seja ultrapassado por três leituras consecutivas, evitando a continuidade de uma situação potencialmente perigosa sem intervenção.

## 3. Funcionamento do programa

**Definição do limite de temperatura:**
No início da execução, o usuário informa o valor do limite de temperatura, que deve estar entre 0 e 150 °C. Esse valor é validado antes de o programa prosseguir para a etapa de leituras.

**Realização das leituras:**
A cada iteração, o programa solicita ao usuário uma temperatura lida por um sensor, que deve estar entre -50 e 150 °C. Cada valor válido é somado a um acumulador (`soma`) e contabilizado (`quantidade`), permitindo o cálculo posterior da média. O programa também atualiza continuamente a maior e a menor temperatura registradas.

**Tratamento de valores inválidos:**
Tanto o limite quanto cada temperatura passam por uma validação em laço `do...while`: se o valor digitado não for numérico (falha do `scanf`) ou estiver fora da faixa permitida, o programa exibe uma mensagem de erro e solicita a entrada novamente, repetindo esse processo até que um valor válido seja fornecido. Após cada leitura com `scanf`, o buffer de entrada é limpo com `while (getchar() != '\n');` para evitar que caracteres residuais (como o `\n`) interfiram nas leituras seguintes.

**Identificação de temperaturas acima do limite:**
Após cada leitura válida, o programa compara a temperatura com o limite definido. Se a temperatura for maior que o limite, um alerta é exibido e os contadores `acimaLimite` (total de ocorrências) e `consecutivas` (sequência atual) são incrementados. Caso contrário, a temperatura é considerada normal e o contador de consecutivas é zerado.

**Contagem de temperaturas consecutivas:**
A variável `consecutivas` acumula o número de leituras seguidas que ultrapassaram o limite. Sempre que uma leitura estiver dentro do limite, esse contador é reiniciado em zero, pois a sequência é interrompida.

**Condição de encerramento do monitoramento:**
O monitoramento é encerrado de duas formas: (1) automaticamente, quando três temperaturas consecutivas ultrapassam o limite, disparando um alerta de segurança; ou (2) manualmente, quando o usuário escolhe não registrar mais nenhuma temperatura (opção "0") após uma leitura.

## 4. Estruturas de repetição utilizadas

**`do...while`:**
Utilizado nas três validações de entrada do programa (limite de temperatura, temperatura do sensor e opção de continuar). Essa estrutura foi escolhida porque é necessário executar a leitura do dado pelo menos uma vez antes de verificar se ele é válido — não faria sentido testar uma condição sobre um valor que ainda não foi lido. O `do...while` garante essa execução mínima e repete o processo enquanto a entrada for inválida.

**`while`:**
Utilizado em dois contextos: (1) no laço principal do programa, `while (continuar == 1 && consecutivas < 3)`, que controla a repetição das leituras enquanto o usuário desejar continuar e o limite de segurança não tiver sido atingido; e (2) na limpeza do buffer de entrada, `while (getchar() != '\n')`, que remove caracteres residuais até encontrar a quebra de linha. O `while` foi escolhido nesses casos porque a condição de parada pode ser verdadeira já na primeira verificação (por exemplo, o usuário pode optar por não continuar logo na primeira rodada, ou o buffer pode já estar limpo), não havendo necessidade de garantir uma execução mínima.

## 5. Como executar

Compile o programa com o GCC:

```
gcc monitoramento.c -o monitoramento
```

Execute o programa gerado:

```
./monitoramento
```

## 6. Testes realizados

**Teste 1 — Validação de entradas inválidas:**
Foram testadas entradas como letras no lugar de números, valores de limite fora da faixa (ex.: -10 ou 200) e temperaturas fora da faixa (ex.: -100 ou 300). Em todos os casos, o programa exibiu a mensagem de erro correspondente e solicitou a entrada novamente, sem travar ou aceitar o valor incorreto.

**Teste 2 — Temperaturas acima do limite, porém não consecutivas:**
Com um limite de 80 °C, foram inseridas temperaturas alternadas, como 85 (acima), 70 (normal), 90 (acima), 60 (normal). O programa exibiu corretamente o alerta individual em cada leitura acima do limite, mas como nenhuma sequência de três ocorrências consecutivas foi formada (o contador `consecutivas` era zerado a cada leitura normal), o monitoramento não foi encerrado automaticamente, permitindo que o usuário continuasse até optar por encerrar manualmente.

**Teste 3 — Três temperaturas consecutivas acima do limite:**
Com o mesmo limite de 80 °C, foram inseridas três temperaturas seguidas acima do valor, como 85, 90 e 95. Após a terceira leitura consecutiva acima do limite, o programa exibiu o alerta de segurança e encerrou o monitoramento automaticamente, sem perguntar se o usuário desejava continuar, confirmando o funcionamento correto do mecanismo de segurança.

Em todos os três cenários, o relatório final foi exibido corretamente ao término do programa, apresentando o limite definido, a quantidade de leituras, a média, a maior e a menor temperatura e o total de leituras acima do limite.

## 7. Questão final de reflexão

**Por que você escolheu while, do...while ou uma combinação das duas estruturas? Em qual parte do algoritmo a diferença entre testar a condição antes ou depois da execução foi importante para sua solução?**

Usei uma combinação das duas estruturas. O `do...while` foi usado nas validações de entrada (limite, temperatura e opção de continuar), porque nesses casos é preciso primeiro pedir o valor ao usuário para só depois verificar se ele é válido.

Já o `while` foi usado no laço principal do monitoramento, porque ali a condição precisa ser verificada antes de começar uma nova leitura. Isso é importante quando o limite de três temperaturas consecutivas é atingido: o programa precisa parar imediatamente, sem fazer mais nenhuma leitura, o que só é possível testando a condição antes de executar o bloco.

Ou seja, a diferença entre testar a condição antes ou depois foi decisiva em dois pontos-chave: na validação de dados, onde o teste precisa vir depois (porque não há valor para testar antes da leitura); e no controle do encerramento automático de segurança, onde o teste precisa vir antes (para impedir que uma leitura desnecessária seja realizada depois que a condição de risco já foi atingida).
