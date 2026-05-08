<h1 align="center">
    <img alt="push_swap" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/push_swape.png">
</h1>

# 🔢 Push_Swap - @42SP
**Score:** 84/100 ✅

Este repositório contém a implementação do **push_swap** que é um desafio de algoritmos de ordenação do currículo da [42 São Paulo](https://www.42sp.org.br/).
O objetivo é ordenar um conjunto de dados em uma stack, utilizando um conjunto limitado de instruções e o menor número possível de movimentos.

## 🚀 Objetivos

> - Implementar um algoritmo de ordenação eficiente (ex: Turk Algorithm / Radix / Mechanical)
> - Manipular duas stacks (Stack A e Stack B)
> - Minimizar o custo operacional (quantidade de comandos)
> - Lidar com complexidade de tempo e espaço (**Big O Notation**)

### O Algoritmo: Radix Sort

Para este projeto, optei pela implementação do algoritmo **Radix Sort** (baseado em binários). 
Diferente de algoritmos que analisam os valores brutos, este código utiliza uma etapa de **Indexação** (`ft_set_index`). 
Isso significa que, antes da ordenação começar, cada número recebe um índice baseado em sua posição no ranking do conjunto.

> **Vantagem:** O número de movimentos torna-se **constante e previsível** para grandes quantidades de números, já que o algoritmo opera sobre os bits dos índices e não sobre os valores inseridos.

## 🛠️ Tecnologias e Conceitos
<div align="left">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C" />
  <img src="https://img.shields.io/badge/Algorithms-FFD700?style=for-the-badge&logo=google-cloud&logoColor=black" alt="Algorithms" />
</div>

> - **Bitwise Operations:** Ordenação baseada na comparação bit a bit dos índices.
> - **Doubly Linked List:** Implementação de stacks utilizando listas duplamente encadeadas para operações eficientes de `rotate` e `reverse rotate`.
> - **Input Validation:** Tratamento rigoroso de erros, incluindo duplicatas, valores não numéricos e limites de `INT_MAX/MIN`.

## 📁 Estrutura do Projeto
```bash
.
├── includes/          # Headers (.h)
├── src/               # Lógica do algoritmo e operações
├── libft/             # Biblioteca reutilizável
├── Makefile           # Automação de compilação
└── README.md          # Este arquivo
```

## ⚙️ Como Utilizar

### 1. Compilar
Na raiz do projeto, execute:
```bash
$ make
```

### 2. Execução
Passe a lista de números desordenados:
```bash
./push_swap 100 5 42 -1 0
```

## 🧠 Lições Aprendidas e Dicas

**- Previsibilidade vs. Eficiência:** O Radix Sort brilha pela estabilidade em grandes volumes (500 números), onde o custo de movimentos é "cravado" e fácil de calcular, mesmo que seja menos eficiente para conjuntos muito pequenos (5 ou 10 números).

**- A Importância do Index:** Criar um ranking (index) dos números antes de ordenar garante um pré-tratamento para números negativos ou valores muito grandes, isolando a lógica do algoritmo da magnitude do dado.

**- Gestão de Memória:** O uso de listas duplamente encadeadas exigiu um cuidado rigoroso com a desalocação (`ft_deleting_list`) para garantir a ausência total de *memory leaks*.

> **Dica de estudo:** Nesse projeto foi onde o prazo apertou e demorei para entender como as listas funcionavam na prática. Estes recursos foram fundamentais para os conceitos fazerem sentido:
> - [Playlist de Estrutura de Dados (YouTube)](https://www.youtube.com/watch?v=wa2VSXktHHY&list=PL3ZslI15yo2r-gHJtjORRMRKMSNRpf7u5&index=48)
> - [Learn C - Linked Lists](https://www.learn-c.org/en/Linked_lists)
> - [IME-USP: Listas Encadeadas](https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html)
> - [GeeksforGeeks: Doubly Linked List](https://www.geeksforgeeks.org/dsa/doubly-linked-list/)
