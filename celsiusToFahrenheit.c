#include<stdio.h>

int main() {
	float celsius, fahrenheit;
	
	printf("Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9/5) + 32;
	
	printf("\nFahrenheit: %.1f", fahrenheit);
	
	return 0;
}
