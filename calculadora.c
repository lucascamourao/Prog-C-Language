#include <stdio.h>

int main() {
	
double num1, num2, resultado;
char operador;
  
printf("Digite os operandos e o operador (<operando> <operador> <operando>): ");
scanf("%lf %c %lf", &num1, &operador, &num2);

switch(operador) {
  case '+':
    resultado = num1 + num2;
    printf("\nO resultado eh %.2lf.", resultado);
    break;
  
  case '-':
    resultado = num1 - num2;
    printf("\nO resultado eh %.2lf.", resultado);
    break;
  
  case 'x':
    resultado = num1 * num2;
    printf("\nO resultado eh %.2lf.", resultado);
    break;
  
  case '%':
    resultado = num1 / num2;
    printf("\nO resultado eh %.2lf.", resultado);
    break;

  default: 
    printf("\nSelecione uma das operações a seguir (+, -, x, %%)");
    break;
  
}

	return (0);
}