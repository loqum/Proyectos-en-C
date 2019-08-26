#include<stdio.h>
#define TARIFA_MAYOR 0.9
#define TARIFA_MEDIA 1.0
#define TARIFA_MENOR 1.2
#define LIMITE_SUPERIOR 1850
#define LIMITE_INFERIOR 1000

int main() {
	float gasto, tarifa;
	
	printf("Introduce tu gasto en Kw/h: ");
	scanf("%f", &gasto);
	
	if (gasto > LIMITE_SUPERIOR) {
		tarifa = TARIFA_MAYOR;
	} else if (gasto > LIMITE_INFERIOR && gasto < LIMITE_SUPERIOR) {
		tarifa = TARIFA_MEDIA;
	} else if (gasto < LIMITE_INFERIOR) {
		tarifa = TARIFA_MENOR;
	}
	
	printf("La tarifa a aplicar es: %f", tarifa);
	
	return 0;
}
