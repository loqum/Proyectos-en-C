#include<stdio.h>
void sortAsc(int n1, int n2, int n3);
void sortDesc(int n1, int n2, int n3);

int main() {
	
	int a, b, c;
	
	printf("Introduce tres numeros: ");
	scanf("%i %i %i", &a, &b, &c);
	
	sortAsc(a, b, c);
	printf("\n\n");
	sortDesc(a, b, c);

	return 0;
}

void sortAsc(int n1, int n2, int n3) {
	
	if (n1 > n2 && n1 > n3) {
		if (n2 > n3) {
			printf("%i %i %i", n1, n2, n3);	
		} else {
			printf("%i %i %i", n1, n3, n2);
		}
	}
	
	if (n2 > n1 && n2 > n3) {
		if (n1 > n3) {
			printf("%i %i %i", n2, n1, n3);
		} else {
			printf("%i %i %i", n2, n3, n1);
		}
	}	
	
	if (n3 > n1 && n3 > n2) {
		if (n1 > n2) {
			printf("%i %i %i", n3, n1, n2);
		} else {
			printf("%i %i %i", n3, n2, n1);
		}
	}
}

void sortDesc(int n1, int n2, int n3) {
	
	if (n1 < n2 && n1 < n3) {
		if (n2 < n3) {
			printf("%i %i %i", n1, n2, n3);	
		} else {
			printf("%i %i %i", n1, n3, n2);
		}
	}
	
	if (n2 < n1 && n2 < n3) {
		if (n1 < n3) {
			printf("%i %i %i", n2, n1, n3);
		} else {
			printf("%i %i %i", n2, n3, n1);
		}
	}	
	
	if (n3 < n1 && n3 < n2) {
		if (n1 < n2) {
			printf("%i %i %i", n3, n1, n2);
		} else {
			printf("%i %i %i", n3, n2, n1);
		}
	}
}
