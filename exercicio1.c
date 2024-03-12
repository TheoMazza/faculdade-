#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;

    srand(time(NULL));

    numero_sorteado = rand() % 100 + 1;

    while (1) {
        printf("Digite seu palpite (entre 1 e 100): ");
        scanf("%d", &palpite);

        
        if (palpite < 1 || palpite > 100) {
            printf("Palpite inválido! Digite um número entre 1 e 100.\n");
            continue; 
        }

        
        if (palpite == numero_sorteado) {
            printf("Parabéns!!! Você acertou!\n");
            break; 
        } else if (palpite < numero_sorteado) {
            printf("Você chutou muito baixo! O valor correto é %d.\n", numero_sorteado);
        } else {
            printf("Você chutou muito alto! O valor correto é %d.\n", numero_sorteado);
        }
    }

    return 0;
}
