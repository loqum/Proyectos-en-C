#include<iostream>

using namespace std;

int main() {
	int matriz[2][2];

	for (int filas = 0; filas < 2; filas++) {
		for (int columnas = 0; columnas < 2; columnas++) {
			cout << "Introduce un numero: ";
			cin >> matriz[filas][columnas];
		}
	}

	for (int filas = 0; filas < 2; filas++) {
		for (int columnas = 0; columnas < 2; columnas++) {
			cout << matriz[filas][columnas] << " ";
		}
		
		cout << "\n";
	}

	return 0;
}
