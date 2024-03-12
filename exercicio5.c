#include <stdio.h>


int verificarPerfeicao(int num) {
    int somaDivisores = 0;

    
    for (int i = 1; i <= num / 2; i++) {
        
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

   
    if (somaDivisores == num) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numero;

   
    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);

    
    if (verificarPerfeicao(numero)) {
        printf("%d é um número inteiro perfeito\n", numero);
    } else {
        printf("%d NÃO é um número inteiro perfeito\n", numero);
    }

    return 0;
}
