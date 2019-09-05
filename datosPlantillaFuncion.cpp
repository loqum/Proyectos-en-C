#include<iostream>

using namespace std;

template <class T>
void despliegue(T dato);

int main() {
	
	int dato = 4;
	float dato2 = 13.45;
	double dato3 = 234.535324;
	char dato4 = 'a';
	
	despliegue(dato);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	return 0;
}

template <class T>
void despliegue(T dato) {
	cout << "El dato es: " << dato << endl;
}
