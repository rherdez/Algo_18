#include <iostream>
 #include <stdio.h>  
 #include <windows.h>
#include "lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 void caracteres();
 void dibujar(int,int);
lista carta;

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
		cout<<"8) Caracteres"<<endl;
		cout<<"9) Dibujar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
					cout<<"Ingrese un valor"<<endl;
					cin>>temp;
					carta.agregar(temp);
					break;
			case 2:
					carta.presentar();
					system("pause");
					system("cls");
					break;
			case 3:
				cout<<"Ingrese el codigo a Buscar"<<endl;
				cin>>temp;
				carta.buscar(temp);
				if(carta.T==NULL){
					cout<<"Registro No Encontrado"<<endl;
				}
				else{
					cout<<"ID: "<<carta.T->id<<endl;
					
				}
				break;
			case 4:
				carta.llenar();
				break;
			case 5:
				carta.vaciar();
				break;
			case 6:
				carta.modificar();
				break;
			case 7:
				carta.eliminar();
				break;
			case 8:
				caracteres();
				break;
			case 9:
				dibujar(25,5);
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);

	return 0;
}
 void caracteres(){
 	for(int i=0;i<255;i++){
 		cout<<i<<"->"<<char(i)<<endl;
	 }
 }
 void dibujar(int x, int y){
 	gotoxy(x,y);
 	cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
 	gotoxy(x,y++);
 	gotoxy(x,y++);
 	cout<<char(186)<<"    9"<<char(186);
 	gotoxy(x,y++);
 	cout<<char(186)<<"  "<<char(4)<<"  "<<char(186);
 	gotoxy(x,y++);
 	cout<<char(186)<<"9    "<<char(186);
 	gotoxy(x,y++);
 	cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188);
 	gotoxy(x,y++);
 	
 	
 }
