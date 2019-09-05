#include<iostream>

using namespace std;

void suma(int n1, int n2);

int main() {
	
	int n1, n2;
	
	cout << "Introduce dos numeros: "; cin >> n1 >> n2;
		
	return 0;
}


void valNuevo(int& n1, int& n2) {
	cout << "El valor del primer numero es: " << n1 << endl;
	cout << "El valor del segundo numero es: " << n2 << endl;
}
