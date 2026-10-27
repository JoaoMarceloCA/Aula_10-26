#include <stdio.h>

int main() {
    int x;
    int tentativas = 0;

    printf("Jogo de adivinhação de numeros\n");
    printf("Tente acertar que numero estou pensando, a dica é: galo, cavalo, dragão, coelho, o que eles tem em comun?\n");
    scanf("%d", &x);

    while (x != 12) {
        printf("Nao, errado tente de novo\n");
        scanf("%d", &x);
        tentativas = tentativas + 1;
    }

    if (tentativas == 0){
        printf("Nossa, de primeira, parabens, como sabia que era o zoodiaco\n");
    } else {
        printf("Hehe, voce acertou é o zoodiaco\n");
    }

    return 0;
}