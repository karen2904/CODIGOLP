/*Escriba un programa fionachi, secuencia de multiplos entre ellos mismos, */


#include<iostream>
#include<locale.h>

using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");

    double a=0,b=1,f=0, n , i=0;
    
    cout<<"Digite la cantidad de veces: " ; cin>> n;
    for(int i=1; i<=50; i++){
    	f= a+b;
    	a=b;
    	b=f;
    	cout<< f<<endl;
    	
    }
	return 0;
}
