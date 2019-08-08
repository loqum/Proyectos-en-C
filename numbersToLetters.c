#include<stdio.h>
void numberToLetters(int number);

int main() {
	int number;
	
	printf("Introduce a number from 1 to 10: ");
	scanf("%i", &number);
	
	numberToLetters(number);
	
	return 0;
}

void numberToLetters(int number) {
	switch(number) {
		case 1:
			printf("\nUno");
			break;
		case 2:
			printf("\nDos");
			break;
		case 3:
			printf("\nTres");
			break;
		case 4:
			printf("\nCuatro");
			break;
		case 5:
			printf("\nCinco");
			break;
		case 6:
			printf("\nSeis");
			break;
		case 7:
			printf("\nSiete");
			break;
		case 8:
			printf("\nOcho");
			break;
		case 9:
			printf("\nNueve");
			break;
		case 10:
			printf("\nDiez");
			break;
		default:
			printf("\nWrong number");
			break;
	}
}
