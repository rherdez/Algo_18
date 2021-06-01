#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int x,y;
void saludo();
int suma();
void ingresar_datos();
int resta(int,int);
int presentar(int);

int main(int argc, char** argv) {
	int op=0;
	
	do{
		cout<<"MENU"<<endl;
		cout<<"1) Saludo"<<endl;
		cout<<"2) Suma"<<endl;
		cout<<"3) Resta"<<endl;
		cout<<"4) Presentar Numero"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				saludo();
				break;
			case 2:
				ingresar_datos();
				cout<<"La Suma es: "<<suma()<<endl;
				break;
			case 3:
				ingresar_datos();
				cout<<"La Resta es: "<<resta(x,y)<<endl;
				break;
			case 4:
				presentar(3);
				break;
			case 0:
				break;
			default:
				cout<<"OPCION NO VALIDA"<<endl;
		}
				
	}while(op!=0);
	
	return 0;
}

void saludo(){
	cout<<"Hola Mundo"<<endl;
}
void ingresar_datos(){
	cout<<"Ingrese Numero 1:"<<endl;
	cin>>x;
	cout<<"Ingrese Numero 2:"<<endl;
	cin>>y;
	
}
int suma(){
	return x+y;
}
int resta(int n1, int n2){
	return n1-n2;
}

int presentar(int x){
	if(x<0){
		return 0;
	}
	else{
	
		presentar(x-1);
		cout<<"N:"<<x<<endl;
		cout<<"Hola Mundo"<<endl;
		cout<<"Resta"<<resta(5,x)<<endl;
	}				
}
