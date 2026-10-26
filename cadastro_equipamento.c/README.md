# Cadastro de Equipamentos em C

Programa em linguagem C para cadastrar e consultar os equipamentos de um laboratório de informática. Os dados são gravados em um arquivo de texto (`equipamentos.txt`), então continuam salvos depois que o programa é fechado.

**Autor:** Guth Henry Riquelmes
**Curso:** Análise e Desenvolvimento de Sistemas (ADS)
**Disciplina:** Desenvolvimento de Algoritmos e Programação em C — Profa. Karla Roberto Sartin

---

## Funcionalidades

- Menu com três opções: **Cadastrar equipamento**, **Listar equipamentos** e **Sair**.
- Cadastro com **nome**, **código de identificação** e **localização**.
- Gravação dos dados no arquivo `equipamentos.txt`.
- Listagem na tela de todos os equipamentos cadastrados.
- Os cadastros anteriores são preservados a cada novo cadastro.

## Conceitos utilizados

| Função / modo | Para que serve no programa |
|---|---|
| `fopen()` | Abre o arquivo `equipamentos.txt` |
| modo `"a"` | Acrescenta dados no final, sem apagar os anteriores |
| modo `"r"` | Abre o arquivo apenas para leitura |
| `fgets()` | Lê o texto digitado (aceita espaços) e lê o arquivo linha a linha |
| `fprintf()` | Escreve os dados no arquivo |
| `fclose()` | Fecha o arquivo e garante a gravação |

## Estrutura do projeto

```
.
├── main.c              # código-fonte do programa
├── README.md           # este arquivo
└── equipamentos.txt    # criado automaticamente no primeiro cadastro
```

---

## Como executar

### Opção 1 — OnlineGDB (usado nas aulas)

1. Acesse [onlinegdb.com/online_c_compiler](https://www.onlinegdb.com/online_c_compiler).
2. Selecione a linguagem **C** (não C++).
3. Apague o código de exemplo e cole o conteúdo do `main.c`.
4. Clique em **Run**.
5. Use o menu no terminal que aparece na parte de baixo da tela.

> O arquivo `equipamentos.txt` é criado automaticamente no primeiro cadastro.

### Opção 2 — Compilando no computador (GCC)

```bash
gcc main.c -o cadastro
./cadastro
```

No Windows, execute com `cadastro.exe`.

---

## Exemplo de uso

```
===== CADASTRO DE EQUIPAMENTOS =====
1 - Cadastrar equipamento
2 - Listar equipamentos
3 - Sair
Escolha uma opcao: 1

Nome do equipamento: Notebook Dell
Codigo de identificacao: EQ001
Localizacao: Laboratorio 1
Equipamento cadastrado com sucesso!
```

Ao escolher a opção 2, o programa mostra:

```
===== EQUIPAMENTOS CADASTRADOS =====

--- Equipamento 1 ---
Nome: Notebook Dell
Codigo: EQ001
Localizacao: Laboratorio 1

--- Equipamento 2 ---
Nome: Projetor Epson
Codigo: EQ002
Localizacao: Sala 204
```

## Exemplo do arquivo `equipamentos.txt`

Cada equipamento ocupa **3 linhas** no arquivo: nome, código e localização, nessa ordem.

```
Notebook Dell
EQ001
Laboratorio 1
Projetor Epson
EQ002
Sala 204
Roteador TP-Link
EQ003
Laboratorio 2
```

## Observações

- Digite apenas números no menu. Letras no lugar da opção não são tratadas pelo programa.
- Se o arquivo `equipamentos.txt` for apagado, os cadastros são perdidos. O programa cria um novo arquivo no próximo cadastro.
- O programa não foi modularizado: todo o código está no `main.c`.
