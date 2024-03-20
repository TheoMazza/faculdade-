#include <stdio.h>

double calcularExpressao(int n) {
  double resultado = 0;
  int sinal = 1;

  for (int k = 1; k <= n; ++k) {
    resultado += sinal * ((double)k / (k * k));
    sinal *= -1;

  }
  return resultado;

}

int main() {
  int n;

  printf("digite um valor numerico ");
  scanf("%d", &n);

  double resultado = calcularExpressao(n);
  printf("o resultado para n é = %d é: %.151f\n", n, resultado);

  return  0;

}