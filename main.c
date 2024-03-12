#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_aleatorio, palpite, tentativas = 0;
    srand(time(NULL)); 

    numero_aleatorio = rand() % 100 + 1;

    
    do {
        printf("Tente adivinhar o número sorteado (entre 1 e 100): ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, insira um número válido entre 1 e 100.\n");
            continue;
        }

        
        if (palpite == numero_aleatorio) {
            printf("Parabéns!!! Você acertou em %d tentativas.\n", tentativas);
            break;
        } else if (palpite < numero_aleatorio) {
            printf("Você chutou muito baixo!\n");
        } else {
            printf("Você chutou muito alto!\n");
        }
    } while (1); 

    return 0;
}
