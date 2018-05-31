/*Calcula o consumo médio de combustivel*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
{
    float distancia, litros, consumo;
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite a distância percorrida: ");
    scanf("%f", &distancia);
    printf("\nDigite a quantidade de litros de combustivel gasta: ");
    scanf("%f", &litros);
    consumo = (distancia/litros);
    printf("\nO consumo do seu carro é de %.2f KM por litro", consumo);

    getche();
}
