#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
  int x=56;
  int *y=new int;
  *y=15;
  
  		cout<<"Valor X:  "<<x<<endl;
  		cout<<"Valor Y:  "<<*y<<endl;
  		
  		cout<<"Memoria:  "<<&x<<endl;
  		cout<<"Memoria:  "<<y<<endl;
	*y=x;
	
		cout<<"Valor y"<<y<<endl;
	*y=99;	
		
		
		cout<<"Valor X2 "<<x<<endl;
		cout<<"Valor Y2 "<<*y<<endl;
	
	
	return 0;
}
