/*Uma pessoa � obesa se seu indice de massa corp�rea � superior a 30, tal �ndice � a
raz�o entre seu peso e o quadrado da sua altura */

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
    printf ("\nSeu IMC � %.1f", IMC);
    if (IMC <= LIMITE)  printf("\nVoc� n�o est� Obeso!");
    else                printf("\nVoc� est� Obeso! Procure um m�dico");

    getche();

}
