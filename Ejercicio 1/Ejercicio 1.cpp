// Ejercicio 1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int A, B;
  cout << "Ingrese un numero entero\n>>> ";
	cin >> A;
	cout << "Ingrese un segundo numero entero\n>>> ";
	cin >> B;
	cout << A;
	if (A%B != 0)cout << " no ";
	cout << "es dibisible por " << B << endl;
	system("pause");
  return 0;
}

