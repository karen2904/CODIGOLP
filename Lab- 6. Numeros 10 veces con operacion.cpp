//EJERCICIO 6
/*Solicite tres números y con ellos calcule: la suma del doble del primer número con el triple del segundo menos la mitad del tercero. Repita esta operación 10 veces y
en cada una de ella imprima los números ingresados y el valor de la operación realizada. */
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"Spanish");
	int num1,num2,num3, i=1,res; //res es resultado de la operación
	while(i<=10){
	 cout<< "\n" ;
     cout<< i ;
	 cout<<"\nDigite un numero: " ; cin>> num1 ;	
	 cout<<"Digite un numero: " ; cin>> num2 ;	
	 cout<<"Digite un numero: " ; cin>> num3 ;	
	//operacion 
	 res=(num1*2)+(num2*3)-(num3/2);
	 
	 cout<<"El resultado de la operación es: " << res << endl;
	 i++;
	}
}

