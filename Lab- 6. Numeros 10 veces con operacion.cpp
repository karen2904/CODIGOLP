//EJERCICIO 6
/*Solicite tres n�meros y con ellos calcule: la suma del doble del primer n�mero con el triple del segundo menos la mitad del tercero. Repita esta operaci�n 10 veces y
en cada una de ella imprima los n�meros ingresados y el valor de la operaci�n realizada. */
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"Spanish");
	int num1,num2,num3, i=1,res; //res es resultado de la operaci�n
	while(i<=10){
	 cout<< "\n" ;
     cout<< i ;
	 cout<<"\nDigite un numero: " ; cin>> num1 ;	
	 cout<<"Digite un numero: " ; cin>> num2 ;	
	 cout<<"Digite un numero: " ; cin>> num3 ;	
	//operacion 
	 res=(num1*2)+(num2*3)-(num3/2);
	 
	 cout<<"El resultado de la operaci�n es: " << res << endl;
	 i++;
	}
}

