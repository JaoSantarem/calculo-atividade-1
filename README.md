# Atividade 1 - Aproximando um limite

Programa independente em C para investigar f(x) = (x² - 4)/(x - 2), quando x se aproxima de 2.

## Como executar

Com GCC instalado, abra um terminal nesta pasta:

```sh
gcc -std=c11 -Wall -Wextra main.c -o atividade1
```

No Windows (PowerShell): `./atividade1.exe`.
No Linux ou macOS: `./atividade1`.

Outra possibilidade: copie main.c para um compilador de C online e execute.

## Entendendo o codigo

1. `#include <stdio.h>` permite usar `printf` para escrever na tela.
2. `double calcular(double x)` cria uma funcao que recebe x e devolve o resultado da formula. `double` guarda numeros com casas decimais.
3. `x * x` significa x ao quadrado. Em C, nao use `x ^ 2`: esse operador nao calcula potencia.
4. `int main(void)` e o ponto onde a execucao comeca.
5. `double valores[8]` guarda os oito numeros em uma lista (vetor). As posicoes vao de 0 a 7.
6. `for (i = 0; i < 8; i++)` repete o calculo oito vezes: comeca em 0, continua enquanto i for menor que 8 e aumenta i em 1 a cada repeticao.
7. `valores[i]` pega o numero da posicao atual. `calcular(valores[i])` envia esse numero para a funcao.
8. `%.4f` mostra um numero com quatro casas decimais. `\n` pula uma linha.
9. `return 0` encerra o programa com sucesso.

Exemplo: para x = 1.9, a conta e (1.9 * 1.9 - 4)/(1.9 - 2) = (-0.39)/(-0.1) = 3.9.

## Tabela esperada

Esta tabela descreve o resultado esperado; nao e uma captura de execucao.

```text
x          f(x)
----------------------
1.9000     3.9000
1.9900     3.9900
1.9990     3.9990
1.9999     3.9999
2.0001     4.0001
2.0010     4.0010
2.0100     4.0100
2.1000     4.1000
```

## Respostas das questoes

1. **Para qual valor f(x) esta se aproximando?** De 4.
2. **O que acontece com f(x) a medida que x se aproxima de 2?** Seus valores ficam cada vez mais proximos de 4, tanto com x menor quanto maior que 2.
3. **O que acontece se voce tentar utilizar x = 2?** A expressao fica 0/0, que nao esta definido. O programa usa apenas valores diferentes de 2. A funcao `calcular` tambem deve receber somente valores diferentes de 2.
4. **Qual e o valor do limite?** 4.

## Como explicar a matematica

Podemos fatorar x² - 4 como (x - 2)(x + 2). Para x diferente de 2, cancelamos o fator x - 2 e obtemos x + 2. Quando x se aproxima de 2, x + 2 se aproxima de 4. O limite descreve o comportamento perto de 2, mesmo que a formula original nao tenha valor exatamente em 2.

## Fala simples para apresentar

"Guardei os oito valores em um vetor. O for passa por cada valor, chama a funcao que calcula a formula e mostra o resultado. A tabela mostra que, quando x chega perto de 2, o resultado chega perto de 4. Por isso, o limite e 4. Nao substituimos x por 2 porque isso causaria divisao por zero."

## Entrega

Use main.c como codigo-fonte, execute o programa e tire uma captura da tela. Estude as respostas acima para explica-las com suas palavras.

Validacao: valores conferidos matematicamente. O programa nao foi compilado neste ambiente, pois nao foi encontrado um compilador C.
