#include <iostream>
#include <time.h>
#include  <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	srand(time(NULL));
	int arreglo[10];
	int ma, me;
	
	for(int i=0;i<10;i++){
		arreglo[i]=rand()%50;
	}
	
	
	for(int i=0;i<10;i++){
		cout<<i<< "-->"<<arreglo[i]<<endl;
	}
	
	//mayor
	ma=arreglo[0];
	me=arreglo[0];
	for(int i=1;i<10;i++){
		if(ma<arreglo[i]){
			ma=arreglo[i];
		}
		
		if(me>arreglo[i]){
			me=arreglo[i];
		}
	}
	
	cout<<"El numero mayor es : "<<ma<<endl;
	cout<<"El numero menor es : "<<me<<endl;
	//////ordenamiento
	int k;
	for(int i=0;i<10;i++){
  		for(int j=i+1;j<10;j++){
   			if(arreglo[i]>arreglo[j]){
    			k=arreglo[i];
    			arreglo[i]=arreglo[j];
    			arreglo[j]=k;
   			}
  		}		
 	}
 	for(int i=0; i<10;i++){
  		cout<<arreglo[i]<<endl;
 	}
 	
 	///////
	

	return 0;
}
