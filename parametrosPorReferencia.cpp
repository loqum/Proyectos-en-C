#include<iostream>

using namespace std;

void valNuevo(int&, int&);

int main() {
	
	int n1, n2;
	
	cout << "Introduce dos numeros: "; cin >> n1 >> n2;
	
	valNuevo(n1, n2);
		
	return 0;
}


void valNuevo(int& xnum, int& ynum) {
	cout << "El valor del primer numero es: " << xnum << endl;
	cout << "El valor del segundo numero es: " << ynum << endl;
}
