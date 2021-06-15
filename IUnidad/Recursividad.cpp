#include <iostream>
#include <stdio.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
long long sumarec(long);
long long suma(long);
 clock_t t_i, t_f;
  double secs;
int main(int argc, char** argv) {
	long long n1=10000;
	t_i = clock();
		cout<<"Sumatoria "<<sumarec(n1)<<endl;
	t_f = clock();
    secs = double(t_f- t_i)/CLOCKS_PER_SEC;
    cout<<"Rec: "<<secs<<endl;
    
     t_i = clock();
		cout<<"Sumatoria "<<suma(n1)<<endl;
	 t_f = clock();
   secs = double(t_f- t_i)/CLOCKS_PER_SEC;
    cout<<"Normal: "<<secs<<endl;
    
    t_i = clock();
		cout<<"Sumatoria "<<(n1/2)*(n1+1)<<endl;
	 t_f = clock();
   secs = double(t_f- t_i)/CLOCKS_PER_SEC;
    cout<<"Ecu: "<<secs<<endl;
    
    
	return 0;
}


long long sumarec(long x){
	if(x<=0){
		return 0;
	}
	else{
		return sumarec(x-1)+x;
	}
}

long long suma(long x){
	long long total=0;
	for(long long i=0;i<=x;i++){
		total+=i;
	}
	return total;
}
