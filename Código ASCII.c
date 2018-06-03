/*Exibe um caractere em octal, decimal e hexadecimal*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
{
    char x;
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    printf("\nImprimindo carctere em código ASCII");
    printf("\nDigite o carctere: ");
    scanf("%c", &x);
    printf("\nCarctere: %c - Decimal: %d - Octal: %o - Hexadecimal: %x\n", x, x, x, x);
    system("\nPause");

}
