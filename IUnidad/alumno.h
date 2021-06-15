#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
using namespace std;
class alumno
{
	public:
		
		int codigo;
		string nombre;
		string apellido;
		double Nota[2];
	
		double calcular_promedio();
		
	
	protected:
};

#endif
