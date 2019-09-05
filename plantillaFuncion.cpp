#include<iostream>

using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main() {
	int num = 4;
	float num2 = 56.43;
	double num3 = 34.53542;
	
	mostrarAbs(num);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	return 0;
}

template <class T>
void mostrarAbs(T numero) {
	if (numero < 0) {
		numero *= -1;
	}
	
	cout << "El valor absoluto del numero es: " << numero;
}
