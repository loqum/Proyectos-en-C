#include<stdio.h>

int main() {
	int a, b, c;
	a = b = c = 10;
	
	a+=10;
	
	b+=a;
	
	printf("El valor de a, b y c es: %i %i %i", a, b, c);
	
	return 0;
}
