#include <stdio.h>
#include <stdlib.h>

int main() {
  char operator;
  double number1, number2;

  printf("Bir operat�r girin (+, -, *, /): ");
  scanf("%c", &operator);

  printf("�ki say� girin: ");
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
      printf("Hata! Ge�ersiz operat�r");
  }

  return 0;
}
