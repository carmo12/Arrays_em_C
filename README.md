📌 Projeto em C – Manipulação de Arrays
📖 Descrição

Este projeto consiste em um programa desenvolvido em linguagem C que realiza a leitura de 10 números inteiros, armazena os valores em um array e aplica regras de transformação para gerar um segundo array. Ao final, os resultados são exibidos no console.

⚙️ Funcionamento do Programa

O programa segue as seguintes etapas:

Solicita ao usuário a entrada de 10 números inteiros
Armazena os valores no array A
Processa os dados criando um novo array B com base em regras específicas
Exibe os valores do array resultante

🔢 Regras de Processamento

Durante a criação do array B, o programa aplica as seguintes condições:

Índices pares (0, 2, 4...) → multiplica o valor por 5
Índices ímpares (1, 3, 5...) → soma 5 ao valor

🧠 Lógica Implementada

O projeto utiliza:

Estruturas de repetição (for) para percorrer os arrays
Estruturas condicionais (if/else) para aplicar regras de negócio
Funções para organização e reutilização do código
Manipulação de arrays (vetores)

🛠️ Função Auxiliar
exiberArrayInteiro

Responsável por percorrer um array e imprimir seus valores no console.

Parâmetros:

numeros[]: array de inteiros
length: tamanho do array
