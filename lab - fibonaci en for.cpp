/*Escriba un programa fionachi, secuencia de multiplos entre ellos mismos, */
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
    double long  a=0,b=1,f=0, n , i=0;
    cout<<"Digite la cantidad de veces: " ; cin>> n;
    for(int i=1; i<=n; i++){
    	f= a+b;
    	a=b;
    	b=f;
    	cout << f<<endl;	
    }
    cout<<"El numero final es " ; cin>> f;
	return 0;
}
