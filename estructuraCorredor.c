#include<stdio.h>
#include<stdlib.h>

int main() {
	
	struct corredor {
		char nombre[30];
		int edad;
		char sexo[20];
		char club[30];
	} corredor1;
	
	char categoria[20];
	
	printf("\nIntroduce los datos del Corredor 1");
	printf("\nIntroduce su nombre: ");
	gets(corredor1.nombre);
	printf("\nIntroduce su edad: ");
	scanf("%i", &corredor1.edad);
	fflush(stdin);
	printf("\nIntroduce su sexo: ");
	gets(corredor1.sexo);
	printf("\nIntroduce su club: ");
	gets(corredor1.club);
	
	if (corredor1.edad <= 18) {
		strcpy(categoria, "Juvenil");
	} else if (corredor1.edad > 18 && corredor1.edad <= 40) {
		strcpy(categoria, "Senior");
	} else if (corredor1.edad > 40) {
		strcpy(categoria, "Veterano");
	} else {
		strcpy(categoria, "Ninguna");
	}
	
	printf("\nPertenece a la categoria %s\n", categoria);
	
	system("pause");
	return 0;
}
