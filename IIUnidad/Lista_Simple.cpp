#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "nodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo *I,*F,*T,*A;

void agregar(int x);
void presentar();
void buscar(int);
void llenar();
void vaciar();
void modificar();
void eliminar();
int op,temp;
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Buscar"<<endl;
		cout<<"4) Llenar"<<endl;
		cout<<"5) Vaciar Lista"<<endl;
		cout<<"6) Modificar"<<endl;
		cout<<"7) Borrar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
					cout<<"Ingrese un valor"<<endl;
					cin>>temp;
					agregar(temp);
					break;
			case 2:
					presentar();
					system("pause");
					system("cls");
					break;
			case 3:
				cout<<"Ingrese el codigo a Buscar"<<endl;
				cin>>temp;
				buscar(temp);
				if(T==NULL){
					cout<<"Registro No Encontrado"<<endl;
				}
				else{
					cout<<"ID: "<<T->id<<endl;
					
				}
				break;
			case 4:
				llenar();
				break;
			case 5:
				vaciar();
				break;
			case 6:
				modificar();
				break;
			case 7:
				eliminar();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
	delete(I);
	delete(F);
	delete(T);
	return 0;
}
void eliminar(){
	int pos;
	cout<<"Ingrese Numero a Eliminar"<<endl;
	cin>>pos;
	buscar(pos);
	if(T==NULL){		
		cout<<"No se encontro el Registro"<<endl;
	}
	else{		
		if(T==I){
			I=T->sig;
		}
		else if(T==F){
			A->sig=NULL;
			F=A;
		}
		else{
			A->sig=T->sig;
		}
	}
	
}
void agregar(int x){
	T=new nodo();
	T->id=x;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;
	}
	else{
		F->sig=T;
	}
	F=T;		
}

void presentar(){
	T=I;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->sig;
	}
}
void buscar(int x){
	T=I;
	A=I;
	bool encontrado=false;
	while(T!=NULL && !encontrado){
		if(T->id==x){
			encontrado=true;			
		}
		else{
			A=T;
			T=T->sig;
		}
	}		
}

void llenar(){
	srand(time(NULL));
	
	for(int i=0;i<rand()%20+1;i++){
		agregar(rand()%150);
	}
}
void vaciar(){
I=NULL;
T=NULL;
F=NULL;
	
}
void modificar(){
	T=I;
	int pos;
	cout<<"Ingrese el ID a modificar: "<<endl;
	cin>>pos;
	buscar(pos);
	
	if(T==NULL){
		cout<<"No se encontro el Registro"<<endl;
	}
	else{		
		cout<<"Ingrese el nuevo valor: "<<endl;
		cin>>T->id;
	}
}
