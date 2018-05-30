/*Calcula e informa o perimêtro de uma circunferência*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

#define PI 3.1415

main()
{
    setlocale(LC_ALL, "Portuguese");

    float perm, raio;
    system("cls");

    printf("\nDigite o valor do Raio da circunferência: ");
    scanf("%f", &raio);
    perm = (raio*2*PI);
    printf("\nO valor do Perímetro é %.2f", perm);

    getche();
}
