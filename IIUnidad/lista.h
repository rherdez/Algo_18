#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "nodo.h"
using namespace std;
class lista
{
	public:
		lista();
		~lista();
		nodo *I,*F,*T,*A;
		void agregar(int x);
		void presentar();
		void buscar(int);
		void llenar();
		void vaciar();
		void modificar();
		void eliminar();
		
	protected:
};

#endif
