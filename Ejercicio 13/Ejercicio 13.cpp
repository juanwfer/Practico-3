// Ejercicio 13.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const float recycled = .2, brandNew = .7, other = .1, weight = 1.38;
	int stock = 0;
	cout << "Ingrese cuantas unidades desea fabricar\n>>> ";
	cin >> stock;
	cout << "Necesitara " << weight * stock * recycled << "kg de Materia Prima 1 reciclada, " << weight * stock * brandNew  <<"kg de Materia Prima 1 nueva y " << weight * stock * other << "kg de materia prima 2\n\n";
	system("pause");
  return 0;
}

