#include<stdio.h>
#include<math.h>
void menu();
void function_acos(float x);
void function_asin(float x);
void function_atan(float x);
void function_cos(float x);
void function_sin(float x);
void function_tan(float x);

int main() {

	menu();

	return 0;
}

void menu() {
	float x;
	int opt;

	do {

		printf("\n1. acos");
		printf("\n2. asin");
		printf("\n3. atan");
		printf("\n4. cos");
		printf("\n5. sin");
		printf("\n6. tan");
		printf("\n7. Salir");
		printf("\n\nIntroduce una opcion: ");
		scanf("%i", &opt);

		if (opt != 7 && opt <= 6 && opt >= 1) {
			printf("Introduce un numero: ");
			scanf("%f", &x);
		}

		switch (opt) {
			case 1:
				function_acos(x);
				break;
			case 2:
				function_asin(x);
				break;
			case 3:
				function_atan(x);
				break;
			case 4:
				function_cos(x);
				break;
			case 5:
				function_sin(x);
				break;
			case 6:
				function_tan(x);
				break;
			default:
				printf("\nWrong command!\n");
				break;
		}

	} while (opt != 7);

}

void function_acos(float x) {
	printf("\n%2.f\n", acos(x));
}

void function_asin(float x) {
	printf("\n%2.f\n", asin(x));
}

void function_atan(float x) {
	printf("\n%2.f\n", atan(x));
}

void function_cos(float x) {
	printf("\n%2.f\n", cos(x));
}

void function_sin(float x) {
	printf("\n%2.f\n", sin(x));
}

void function_tan(float x) {
	printf("\n%2.f\n", tan(x));
}

