#include<iostream>

using namespace std;
int isPar(int n);

int main() {
	int n;
	
	cout<<"Introduce un numero: "; cin>>n;
	
	if (isPar(n) == 1) {
		cout<<n<<" es par."<<endl;
		
	} else {
		cout<<n<<" es impar."<<endl;
	}
	
	return 0;
}

int isPar(int n) {
	
	if (n % 2 == 0) {
		return 1;
		
	} else {
		return 0;
	}
}
