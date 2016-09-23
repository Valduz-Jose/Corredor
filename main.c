#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float lunes,miercoles,viernes,promedio;
	int continuar;
	
	system("cls");
	fflush(stdin);
	system("color F0");
	
	do{
		printf("\t\t\t\t\tTiempo promedio de ruta\t\t\t\t\t");
		printf("\n\n\t\t\tLunes: ");
		scanf("%f",&lunes);
		printf("\n\t\t\tMiercoles: ");
		scanf("%f",&miercoles);
		printf("\n\t\t\tViernes: ");
		scanf("%f",&viernes);
		promedio=(lunes+miercoles+viernes)/3;
		printf("\n\n\t\tEl tiempo promedio que tarda en recorrer la ruta en una semana cualquiera es: %.2f",promedio);
		printf("\n\n\t\t\t\tIntroduce (1) para Continuar: ");
		scanf("%d",&continuar);
		system("cls");
	}
	while(continuar==1);
	printf("\t\t\t\t\tTiempo promedio de ruta\t\t\t\t\t");
	printf("\n\n\n\t\t\t\t -- AUF w%cedersehen--\t\t\t\t\t",141);
	return 0;
}
