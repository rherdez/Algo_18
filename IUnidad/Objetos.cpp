#include <iostream>
#include "alumno.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

alumno estudiante[3] ;
int contador=0;
int op;
void agregar();
void presentar();
void borrar();
void actualizar();
int main(int argc, char** argv) {
    do{
    	cout<<"Menu"<<endl;
    	cout<<"1) Agregar"<<endl;
    	cout<<"2) Presentar"<<endl;
    	cout<<"3) Borrar"<<endl;
    	cout<<"4) Actualizar"<<endl;
    	cout<<"0) Salir"<<endl;
    	cin>>op;
    	
    	switch(op){
    		case 1:
    			agregar();
    			break;
    		case 2:
    			presentar();
    			break;
    		case 3:
    			borrar();
    			break;
    		case 4:
    			actualizar();
    			break;
    		case 0:
    			break;
    		default:
    			cout<<"Opcion no valida";
    			break;
		}
    	
	}while(op!=0);

	return 0;
}

void agregar(){
	if(contador<3){
		
		cout<<"Ingrese el codigo"<<endl;
		cin>>estudiante[contador].codigo;
		cout<<"Ingrese el nombre"<<endl;
		cin>>estudiante[contador].nombre;
		cout<<"Ingrese el Apellido"<<endl;
		cin>>estudiante[contador].apellido;
		cout<<"Ingrese Nota 1: "<<endl;
		cin>>estudiante[contador].Nota[0];
		cout<<"Ingrese Nota 2: "<<endl;
		cin>>estudiante[contador].Nota[1];
		contador++;
	}
	else{
		//reciclar
		int pos, codigo, temp;		
		temp=contador;
		pos=-1;
		for(int i=0;i<=temp;i++){
			if(estudiante[i].codigo==-1){
				pos=i;
				i=temp+1;
			}
		}
		if(pos!=-1){
			cout<<"Ingrese el codigo"<<endl;
			cin>>estudiante[pos].codigo;
			cout<<"Ingrese el nombre"<<endl;
			cin>>estudiante[pos].nombre;
			cout<<"Ingrese el Apellido"<<endl;
			cin>>estudiante[pos].apellido;
			cout<<"Ingrese Nota 1: "<<endl;
			cin>>estudiante[pos].Nota[0];
			cout<<"Ingrese Nota 2: "<<endl;
			cin>>estudiante[pos].Nota[1];
		}
		else{
			cout<<"Arreglo Lleno"<<endl;	
		}
		
		
		
	
	}
	
	
}

void presentar(){
	for(int i=0;i<contador;i++){
		if(estudiante[i].codigo!=-1){
			cout<<"Pos: "<<i+1<<endl;
			cout<<"Codigo: "<<estudiante[i].codigo<<endl;	
			cout<<"Nombre: "<<estudiante[i].nombre<<endl;
			cout<<"Apellido: "<<estudiante[i].apellido<<endl;
			cout<<"Nota 1: "<<estudiante[i].Nota[0]<<endl;
			cout<<"Nota 2: "<<estudiante[i].Nota[1]<<endl;
			cout<<"Promedio: "<<estudiante[i].calcular_promedio()<<endl;									
		}
		
	}
}
void borrar(){
	int pos, codigo, temp;
	cout<<"Ingrese el codigo a Borrar"<<endl;
	cin>>codigo;
	temp=contador;
	pos=-1;
	for(int i=0;i<=temp;i++){
		if(codigo==estudiante[i].codigo){
			pos=i;
			i=temp+1;
		}
	}
	if(pos!=-1){
		estudiante[pos].codigo=-1;
	}
}
void actualizar(){
	int pos, codigo, temp;
	cout<<"Ingrese el codigo a Modificar"<<endl;
	cin>>codigo;
	temp=contador;
	
	for(int i=0;i<=temp;i++){
		if(codigo==estudiante[i].codigo){
			pos=i;
			i=temp+1;
		}
	}
	if(pos!=-1){
		
		cout<<"Ingrese el codigo"<<endl;
		cin>>estudiante[pos].codigo;
		cout<<"Ingrese el nombre"<<endl;
		cin>>estudiante[pos].nombre;
		cout<<"Ingrese el Apellido"<<endl;
		cin>>estudiante[pos].apellido;
		cout<<"Ingrese Nota 1: "<<endl;
		cin>>estudiante[pos].Nota[0];
		cout<<"Ingrese Nota 2: "<<endl;
		cin>>estudiante[pos].Nota[1];
	}
	
}
