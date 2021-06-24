#include <iostream>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int ma[4][4];

void llenar();
void presentar();
int presentar2(int,int);
void menor(int,int);
void ordenar();

int ix,iy;
int fx,fy;
int tem_menor;

int main(int argc, char** argv) {
	srand(time(NULL));
	llenar();
	presentar();
	menor(0,0);
	ordenar();
	cout<<"=====================ordenado=============================="<<endl;
	presentar();
	cout<<"=====================presentar 2=============================="<<endl;
	presentar2(3,3);
	return 0;
}

void llenar(){
	
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			ma[x][y]=rand()%100;
		}
	}
}

void presentar(){
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			if(ma[x][y]<10){
				cout<<"||0"<<ma[x][y];
			}
			else{
				cout<<"||"<<ma[x][y];
			}
			
		}
		cout<<endl;
	}
}

void menor(int xi, int yi){
	tem_menor=ma[xi][yi];
	fx=xi;
	fy=yi;
	iy=yi;
	
	for(int x=xi;x<4;x++){
		for(int y=yi;y<4;y++){
			 if(tem_menor>ma[x][y]){
			 	tem_menor=ma[x][y];
			 	fx=x;
			 	fy=y;
			 }
			
		}
		yi=0;
	}
}

void ordenar(){
	int temporal;
	
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			menor(x,y);
			temporal=ma[x][y];
			ma[x][y]=tem_menor;
			ma[fx][fy]=temporal;
			
		}		
	}	
}
int presentar2(int x,int y){
	if(x<0){
		return 0;
	}
	else{
		if(y==-1){
			presentar2(x-1,3);
			cout<<endl;
		}
		else{
			presentar2(x,y-1);
			if(ma[x][y]<10){
				cout<<"0"<<ma[x][y]<<"||";	
			}
			else{
				cout<<ma[x][y]<<"||";		
			}
			
		}				
	}	
}

