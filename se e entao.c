#include <stdio.h>

int main() {

    int hora;

    printf("Digite a hora atual (0-23): ");
    scanf("%d", &hora);

    if (hora <= 12) { // se a hora for menor que 12
        printf("Bom dia!\n"); // imprime Bom dia!
    } else if (hora <= 19) { // senao, se a hora for menor que 18
        printf("Boa tarde!\n"); // imprime Boa tarde!
    } else { // senao (para qualquer outra hora >= 18)
        printf("Boa noite!\n"); // imprime Boa noite!
    }

    return 0;
}