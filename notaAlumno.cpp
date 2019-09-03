#include<iostream>

using namespace std;

int main() {
	float nota_practicas, nota_teorica, nota_participacion;
	
	cout<<"Introduce la nota de practicas: ";
	cin>>nota_practicas;
	cout<<"Introduce la nota de teoria: ";
	cin>>nota_teorica;
	cout<<"Introduce la nota de participacion: ";
	cin>>nota_participacion;
	
	nota_practicas *= 0.30;
	nota_teorica *= 0.60;
	nota_participacion *= 0.10;
	
	cout<<"La nota final es: "<<(nota_practicas + nota_teorica + nota_participacion);
	
	return 0;
}
