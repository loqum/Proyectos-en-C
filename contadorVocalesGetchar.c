#include<stdio.h>
#include<conio.h>

int main() {
	int c, cont = 0;


	while(EOF != (c = getchar()))	 {
		switch(c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cont++;
		}
	}

	printf("Tiene %i vocales", cont);
	
	getch();
	return 0;
}
