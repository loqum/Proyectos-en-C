#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main() {
	char palabra[] = "Esto es una cadena";
	char palabra2[] = " de caracteres.";
	char numero[] = "45";
	
	cout << strcat(palabra, palabra2) << endl;
	cout << strrev(palabra) << endl;
	cout << strrev(palabra) << endl;
	cout << strupr(palabra) << endl;
	cout << strlwr(palabra) << endl;
	cout << atoi(numero) + 10 << endl;
	
	return 0;
}
