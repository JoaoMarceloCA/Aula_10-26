#include <stdio.h>

int main() {
    int x;
    const char *dia;

    printf("Digite o numero do pecador: ");
    scanf("%d", &x);

    switch (x) { // A variável a ser avaliada
        case 1: // Se o valor for 1
            dia = "Yi Sang";
            break; // Interrompe a execução do switch
        case 2: // Se o valor for 2
            dia = "Faust";
            break;
        case 3:
            dia = "Don Quixote";
            break;
        case 4:
            dia = "Ryōshū";
            break;
        case 5:
            dia = "Meursault";
            break;
        case 6:
            dia = "Hong Lu";
            break;
        case 7:
            dia = "Heathcliff";
            break;
        case 8:
            dia = "Ishmael";
            break;
        case 9:
            dia = "Rodion";
            break;
        case 10:
            dia = "Sinclair";
            break;
        case 11:
            dia = "Outis";
            break;
        case 12:
            dia = "Gregor";
            break;
        default: // Equivalente ao "outrocaso", se nenhum caso corresponder
            dia = "Inexistente";
            break;
    }

    printf("Pecador: %s\n", dia);

    return 0;
}