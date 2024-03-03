// Programa para avaliar função de grau n no ponto x. 

#include <stdio.h>
#include <math.h>

double valorNum_polinom(double x, double *vetor_a, int n);
// a(x**n)
// a0 + a1*(x) + a2*(x**2) + ... + an*(x**n)
// a = a0, a1,..., an (coeficientes)
// x = valor a aplicar na função
// n = grau (máximo) da função x^n

int main() {
    int n;
    double x, resultado;
    do{
        printf("Digite o tamanho de n e x: ");
        scanf("%d %lf", &n, &x);
    }while(n < 0);

    double vetor_a[n];
    // Preencher vetor a = {a0, a1, ..., an}
    for (int i = 0; i <= n; i++) {
        printf("Digite a[%d]: ", i);
        scanf("%lf", &vetor_a[i]);
    }

    resultado = valorNum_polinom(x, vetor_a, n);
    printf("%.2lf", resultado);

    return 0;
}

double valorNum_polinom(double x, double *vetor_a, int n) {
    double valor_num = 0;
    for (int i = 0; i <= n; i++) {
        valor_num += vetor_a[i]*(pow(x,i));
    }
    return valor_num;
}