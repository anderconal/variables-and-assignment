/*****
*Nombre: compiling.cpp
*Prop�sito: Aprender a declarar, asignar y mostrar variables en C
*Autor: Ander Conal
*****/

/*Importamos la librer�a stdio.h "standard input-output header"*/
#include <stdio.h>

/*Librer�a necesaria para utilizar la funci�n system()*/
#include <stdlib.h>

/*Funci�n llamada autom�ticamente cuando el programa es ejecutado. Devuelve un entero y no recibe argumentos*/
int main(void)
{
	/*Declaramos las variables*/
	int alto, largo, ancho, volumen, peso;

	/*Asignamos un valor a cada variable*/
	alto = 8;
	largo = 12;
	ancho = 10;
	volumen = alto * largo * ancho;
	peso = (volumen + 165) / 166;

	//Utilizamos la funci�n printf para mostrar el texto que deseamos.
	//%d es un marcador de posici�n que indica d�nde se imprimir� la variable entera correspondiente.
	printf("Dimensiones : %dx%dx%d\n", largo, ancho, alto);
	printf("Volumen (pulgadas c�bicas) : %d\n", volumen);
	printf("Peso dimensional (libras) : %d\n", peso);

	/*Utilizamos esta funci�n para que el programa no se cierre hasta que pulsemos una tecla*/
	system("pause");

	/*Indicamos que el programa termina de manera natural devolviendo el entero 0*/
	return 0;
}