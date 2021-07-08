#include "lista.h"
using namespace std;
lista::lista()
{
	I=NULL;
	T=NULL;
	F=NULL;
	A=NULL;
	
}

lista::~lista()
{
	delete(I);
	delete(F);
	delete(T);
}


void lista::eliminar(){
	int pos;
	nodo *H;
	cout<<"Ingrese Numero a Eliminar"<<endl;
	cin>>pos;
	buscar(pos);
	if(T==NULL){		
		cout<<"No se encontro el Registro"<<endl;
	}
	else{		
		if(T==I){
			H=I;
			I=T->sig;
			delete(H);
		}
		else if(T==F){
			H=F;
			A->sig=NULL;
			F=A;
			delete(H);
		}
		else{
			H=T;
			A->sig=T->sig;
			delete(H);
		}
	}
	
}
void lista::agregar(int x){
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

void lista::presentar(){
	T=I;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->sig;
	}
}
void lista::buscar(int x){
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

void lista::llenar(){
	srand(time(NULL));
	
	for(int i=0;i<rand()%20+1;i++){
		agregar(rand()%150);
	}
}
void lista::vaciar(){
I=NULL;
T=NULL;
F=NULL;
	
}
void lista::modificar(){
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
