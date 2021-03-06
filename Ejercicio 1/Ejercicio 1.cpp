// Ejercicio 1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void printMenu() {
	cout << "1. Determinar si n es primo.\n";
	cout << "2. Mostrar los numeros primos hasta n.\n";
	cout << "3. Salir\n\n>>> ";
}

int main() {
	int choice;
	int number;
	do {
		printMenu();
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Ingrese un numero:\n>>> ";
			cin >> number;
			cout << "El numero " << number;
			if (!isPrime(number)) cout << " no";
			cout << " es primo.\n";
			break;
		case 2:
			cout << "Ingrese un numero:\n>>> ";
			cin >> number;
			for (int i = 0; i < number; i++) {
				if(isPrime(i))cout << "El numero " << i << " es primo.\n";
			}
			break;
		case 3:
			cout << "Saliendo....";
			break;
		default:
			cout << "Opcion no valida.";
		}
		cout << endl;
	} while (choice != 3);
	return 0;
}

