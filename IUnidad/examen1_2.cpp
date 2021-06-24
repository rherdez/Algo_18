#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "geometria.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
geometria g[5];

int temp;
int pos;
int main(int argc, char** argv) {
	cout<<"Hola Mundo"<<endl;
	srand(time(NULL));
	for(int i=0;i<5;i++){
		g[i].altura=rand()%100;
		g[i].base=rand()%100;
	}
	
	////presentar
	for(int i=0;i<5;i++){
		cout<<" Altura: "<<g[i].altura<<endl;
		cout<<" Base: "<<g[i].base<<endl;
		cout<<" Area Rectangulo: "<<g[i].area_cuadrado()<<endl;
		cout<<" Area Triangulo: "<<g[i].area_triangulo()<<endl;
		cout<<"======================"<<endl;
	}
	
	temp=g[0].area_cuadrado();
	pos=0;
	for(int i=1;i<5;i++){
		if(temp< g[i].area_cuadrado()){
			temp=g[i].area_cuadrado();
			pos=i;
		}
	}
	
	cout<<"La posicion de mayor area es: "<<pos<<" y el area es: "<<temp<<endl;
	
	
	
	
	
	return 0;
}
