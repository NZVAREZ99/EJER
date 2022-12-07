#include<stdio.h>
main()
{
	char apellido[50];
	char nombre [50];
	
	printf ("Ingrese su apellido: ");
	gets   (apellido);
	printf ("Ingrese su nombre: ");
	gets   (nombre);
	
	printf ("Usted ingreso %s %s",apellido,nombre);
}
