/*Calcula recebe o valor dos catetos e calcula a hipotenusa*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
    float catA, catO, hip;
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite o valor do Cateto Adjacente: ");
    scanf("%f", &catA);
    printf("\nDigite o valor do Cateto Oposto: ");
    scanf("%f", &catO);
    hip = (sqrt((pow(catA,2))+(pow(catO,2))));
    printf("\nO valor da Hipotenusa é: %.2f\n", hip);
    system("Pause");

}
