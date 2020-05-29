#include <stdio.h>
#include <math.h>

int main() {
  char operador;
  double primerNumero, segundoNumero;

  printf("Ingresa un operador (+,-,*,/) : ");
  scanf("%c",&operador );

  printf("Ingreasa los dos operandos (Separados por una coma Ej: 2,2): ");
  scanf("%lf,%lf", &primerNumero, &segundoNumero);

  switch (operador) {
    case '+':
    printf("%.1lf + %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero + segundoNumero);
    break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero - segundoNumero);
    break;
    case '*':
    printf("%.1lf * %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero * segundoNumero);
    break;
    case '/':
    printf("%.1lf / %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero / segundoNumero);
    break;
  default:
    printf("Operador no es valido\n");
  }

}
