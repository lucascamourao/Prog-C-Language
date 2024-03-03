#include <stdio.h>
#include <math.h>

int main() {
    double S, So, V, Vo, acel, t;
    printf("Digite o espaço inicial: ");
    scanf("%lf", &So);
    printf("Digite a velocidade inicial: ");
    scanf("%lf", &Vo);
    printf("Digite a aceleração: ");
    scanf("%lf", &acel);
    printf("Digite o instante t: ");
    scanf("%lf", &t);

    V = Vo + (acel * t); // velocidade final
    S = So + (Vo*t) + (acel*(t*t))/2; // posição

    printf("A velocidade final é %.2lf e a posição final é %.2lf. ", V, S);
  
    return 0;
}