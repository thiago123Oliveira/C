/*Obtem 2 notas e informa a m�dia Final*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

#define APROVADO 6

main()
{
    float nota1, nota2, media;
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite a 1� nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a 2� nota: ");
    scanf("%f", &nota2);
    media = ((nota1+nota2)/2);
    if (media >= APROVADO)  printf("\nM�dia: %.2f. Aluno aprovado!" , media);
    else                    printf("\nM�dia: %.2f. Aluno reprovado!" , media);

    getche();
}



/*Calcula o consumo m�dio de gasolina

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

    printf("\nDigite a dist�ncia percorrida: ");
    scanf("%f", &distancia);
    printf("\nDigite a quantidade de litros de combustivel gasta: ");
    scanf("%f", &litros);
    consumo = (distancia/litros);
    printf("O consumo do seu carro � de %.2f KM por litro", consumo);

    getche();
}*/


