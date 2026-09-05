# Calculadora em C

## Sobre o projeto

Este projeto é uma calculadora feita em linguagem C para praticar os conceitos básicos de programação aprendidos no curso de ADS.

A calculadora possui 20 operações matemáticas e um menu para o usuário escolher o que deseja fazer.

## Objetivo

O objetivo é praticar:

* Variáveis;
* `printf` e `scanf`;
* `if` e `else`;
* `while`;
* Operações matemáticas;
* Biblioteca `math.h`.

## Funções da calculadora

1. Soma
2. Subtração
3. Multiplicação
4. Divisão
5. Potenciação
6. Raiz quadrada
7. Raiz cúbica
8. Seno
9. Cosseno
10. Tangente
11. Logaritmo natural
12. Logaritmo base 10
13. Valor absoluto
14. Porcentagem
15. Média aritmética
16. Graus para radianos
17. Radianos para graus
18. Área do círculo
19. Área do retângulo
20. Hipotenusa

A opção **21** é usada para sair da calculadora.

## Bibliotecas utilizadas

O programa utiliza:

* `stdio.h` → usada para `printf()` e `scanf()`.
* `math.h` → usada para cálculos como potência, raízes, seno, cosseno, tangente e logaritmos.

## Organização do código

O código está no arquivo:

```text
calculadora.c
```

Primeiro são colocadas as bibliotecas e as variáveis. Depois aparece o menu da calculadora.

O `while` mantém o programa funcionando para que o usuário possa fazer vários cálculos.

Os `if` e `else if` verificam qual opção foi escolhida e realizam o cálculo.

Também existem algumas verificações para evitar erros, como divisão por zero e valores inválidos.

## Conceitos utilizados

### Variáveis

São usadas para guardar os números e os resultados.

```c
float num1, num2, resultado;
```

### Entrada e saída

`scanf()` recebe os valores digitados pelo usuário.

`printf()` mostra informações e resultados na tela.

### Condições

`if`, `else if` e `else` são usados para verificar as opções e evitar alguns erros.

### Repetição

O `while` faz o programa continuar funcionando até o usuário escolher a opção 21.

### math.h

A biblioteca `math.h` permite utilizar funções matemáticas como:

```c
pow()
sqrt()
sin()
cos()
tan()
log()
```

## Como executar

Primeiro, é necessário ter um compilador C, como o GCC.

Para compilar:

```bash
gcc calculadora.c -o calculadora -lm
```

Depois, para executar no Windows:

```bash
calculadora.exe
```

## Exemplo

```text
========== CALCULADORA ==========
1. Soma
2. Subtração
3. Multiplicação
...
20. Hipotenusa
21. Sair
=================================

Digite a opção: 1
Digite o primeiro número: 10
Digite o segundo número: 5
Resultado: 15.00
```

## Identificação

Nomes: Vítor Hugo Nunes Pereira, Carlos Henrique, Isac Araujo, Arthur.

