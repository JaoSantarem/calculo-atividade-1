#include <stdio.h>

/* Esta funcao calcula a expressao da atividade. Use somente x diferente de 2. */
double calcular(double x) {
    return (x * x - 4) / (x - 2);
}

int main(void) {
    /* Os oito valores pedidos no PDF. */
    double valores[8] = {1.9, 1.99, 1.999, 1.9999, 2.0001, 2.001, 2.01, 2.1};
    int i;

    printf("ATIVIDADE 1 - Aproximando um limite\n");
    printf("x          f(x)\n");
    printf("----------------------\n");

    /* i comeca em 0 e vai ate 7, passando pelos oito valores. */
    for (i = 0; i < 8; i++) {
        printf("%.4f     %.4f\n", valores[i], calcular(valores[i]));
    }

    printf("\nQuando x se aproxima de 2, f(x) se aproxima de 4.\n");
    printf("Em x = 2, a formula original nao esta definida: o divisor e zero.\n");
    return 0;
}
