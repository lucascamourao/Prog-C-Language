// Coordenas polares --> Coordenadas cartesianas
#include <stdio.h>
#include <math.h>

int main() {
    double raio, angulo, x, y;
    printf("Digite o raio r: ");
    scanf("%lf", &raio);
    printf("Digite o angulo a: ");
    scanf("%lf", &angulo);

    // sin() e cos() em radianos
    x = raio * cos(angulo);
    y = raio * sin(angulo);

    printf("As coordenas cartesianas (x,y) são iguais a (%.2lf, %.2lf)", x, y);
  
    return 0;
}
  