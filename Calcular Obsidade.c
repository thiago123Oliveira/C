/*Uma pessoa é obesa se seu indice de massa corpórea é superior a 30, tal índice é a
razão entre seu peso e o quadrado da sua altura */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

#define LIMITE 30


main()
{
    float peso, altura, IMC;
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf ("\nDigite seu Peso:  ");
    scanf("%f", &peso);
    printf ("\nDigite sua altura:  ");
    scanf("%f", &altura);
    IMC = (peso/pow(altura,2));
    printf ("\nSeu IMC é %.1f", IMC);
    if (IMC <= LIMITE)  printf("\nVocê não está Obeso!");
    else                printf("\nVocê está Obeso! Procure um médico");

    getche();

}
