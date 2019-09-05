#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;

int main() {
	char palabra[20];
	
	cout << "Introduce una palabra: ";
	cin.getline(palabra, 20, '\n');
	
	cout << palabra;

	return 0;
}
