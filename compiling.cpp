/*****
*ES_Nombre: compiling.cpp
*EN_Name: compiling.cpp
*ES_Propósito: Aprender a declarar, asignar y mostrar variables en C
*EN_Purpose: Learn to declare, assign and print variables on C
*ES_Autor: Ander Conal
*EN_Author: Ander Conal
*****/

/*ES_Importamos la librería stdio.h "standard input-output header"*/
/*EN_We import the library named stdio.h (standard input-output header)*/
#include <stdio.h>

/*ES_Librería necesaria para utilizar la función system()*/
/*EN_Necessary library for use the system() function*/
#include <stdlib.h>

/*ES_Función llamada automáticamente cuando el programa es ejecutado. Devuelve un entero y no recibe argumentos*/
/*EN_This function is automatically called when the program runs. Returns an integer and no arguments (void)*/
int main(void)
{
	/*ES_Declaramos las variables*/
	/*EN_We declare the variables*/
	int alto, largo, ancho, volumen, peso;

	/*ES_Asignamos un valor a cada variable*/
	/*EN_We assign a value for each variable*/
	alto = 8;
	largo = 12;
	ancho = 10;
	volumen = alto * largo * ancho;
	peso = (volumen + 165) / 166;

	//ES_Utilizamos la función printf() para mostrar el texto que deseamos.
	//EN_We use the printf() function to display the desired text on screen.
	//ES_%d es un marcador de posición que indica dónde se imprimirá la variable entera correspondiente.
	//EN_%d is a placeholder indicating where the value of a variable is to be filled in during printing.
	printf("Dimensiones : %dx%dx%d\n", largo, ancho, alto);
	printf("Volumen (pulgadas cúbicas) : %d\n", volumen);
	printf("Peso dimensional (libras) : %d\n", peso);

	/*ES_Utilizamos esta función para que el programa no se cierre hasta que pulsemos una tecla*/
	/*EN_We use this function because we don´t want to close the program until a key is pressed*/
	system("pause");

	/*ES_Indicamos que el programa termina de manera natural devolviendo el entero 0*/
	/*EN_We indicate that the program terminates naturally returning the 0 integer*/
	return 0;
}
