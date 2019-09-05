#include<iostream>

using namespace std;

void multiplicar(float a, float b);
void getDatos();

float n1, n2;

int main() {
	getDatos();
	multiplicar(n1, n2);
	
	return 0;
}

void multiplicar(float a, float b) {
	cout << "Resultado: " << a * b;
}

void getDatos() {
	cout << "Introduce dos numeros: "; cin >> n1 >> n2;
}
