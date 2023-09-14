#include <stdio.h>

int main () {

    float metros, decimetro, centimetros, milimetros;

    printf("Digite o valor em (metros): ");
    scanf("%f", &metros);

    decimetro = metros*10;
    centimetros = metros*100;
    milimetros = metros*1000;

    printf("valor em decimetro: %.f dm\n", decimetro);
    printf("valor em centimetros: %.f cm\n", centimetros);
    printf("valor em milimetros: %.f mm\n", milimetros);


    return 0;

}