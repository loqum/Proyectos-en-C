#include<iostream>

using namespace std;

int main() {
	
	int n1, n2;
	
	cout<<"Introduce dos numeros: "; cin>>n1>>n2;
	
	if (n1 == n2) {
		cout<<"Ambos numeros son iguales";
	} else if (n1 > n2) {
		cout<<n1<<" es mayor que "<<n2;
	} else {
		cout<<n2<<" es mayor que "<<n1;
	}
	
	return 0;
}
