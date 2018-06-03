/*Converte uma temperatura em Fahrenheit para Celsius*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
    float tempf, tempc;
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite a Temperatura em Fahrebheit: ");
    scanf("%f", &tempf);
    tempc = ((tempf-32.0)/1.8);
    printf("\nA temperatura é %.1f° Celsius\n", tempc);
    system("Pause");

}

