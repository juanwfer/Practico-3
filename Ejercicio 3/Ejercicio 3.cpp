// Ejercicio 3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int size = 3;
	int age = -900;
	int temp;
	for (int i = 0; i < size; i++) {
		cout << "Ingrese una edad, " << size - i << " restantes.\n>>> ";
		cin >> temp;
		if (temp > age) age = temp;
	}
	cout << "La mayor edad ingresada es " << age << endl;
	system("pause");
  return 0;
}

