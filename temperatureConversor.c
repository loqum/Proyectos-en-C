#include<stdio.h>
void menu(int option);
float toFahrenheit(float celsius);
float toKelvin(float celsius);

int main() {
	int option;
	
	printf("\n0. Exit");
	printf("\n1. To Fahrenheit");
	printf("\n2. To Kelvin");
	printf("\n\nSelect an option: ");
	scanf("%i", &option);
	
	menu(option);
	
	return 0;
}

void menu(int option) {
	float degrees;
	
	do {
		
		if (option != 0) {
			printf("\n\nEnter degrees: ");
			scanf("%f", &degrees);
		}
		
		switch(option) {
			case 0:
				printf("\nBye");
				break;
			case 1:
				printf("%.2f", toFahrenheit(degrees));
				break;
			case 2:
				printf("%.2f", toKelvin(degrees));
				break;
			default:
				printf("\nWrong command");
				break;
		}
		
	} while(option != 0);
}

float toFahrenheit(float celsius) {
	return (9 * celsius) / 5 + 32;
}

float toKelvin(float celsius) {
	return celsius + 273.15;
}

