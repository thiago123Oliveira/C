/*Obtem 2 notas e informa a média Final*/

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

    printf("\nDigite a 1º nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a 2º nota: ");
    scanf("%f", &nota2);
    media = ((nota1+nota2)/2);
    if (media >= APROVADO)  printf("\nMédia: %.2f. Aluno aprovado!" , media);
    else                    printf("\nMédia: %.2f. Aluno reprovado!" , media);

    getche();
}



/*Calcula o consumo médio de gasolina

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
    printf("O consumo do seu carro é de %.2f KM por litro", consumo);

    getche();
}*/


