#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float x, y, resultado;
	
	cout<<"Introduce el primero valor: ";
	cin>>x;
	
	cout<<"Introduce el segundo valor: ";
	cin>>y;
	
	resultado = (sqrt(x)) / (pow(y, 2) - 1);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}
