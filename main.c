#include <stdio.h>
#include <stdlib.h>

int main() {
  char operator;
  double number1, number2;

  printf("Bir operatör girin (+, -, *, /): ");
  scanf("%c", &operator);

  printf("İki sayı girin: ");
  scanf("%lf %lf", &number1, &number2);

  switch(operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", number1, number2, number1 + number2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", number1, number2, number1 - number2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", number1, number2, number1 * number2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", number1, number2, number1 / number2);
      break;
    default:
      printf("Hata! Geçersiz operatör");
  }

  return 0;
}
