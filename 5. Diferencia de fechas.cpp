/*Ejercicio numero 5

Hacer el programa que permita los dias de difusión(diferencia) que hay entre dos fechas

Asuma que el programa ingresa primero la fecha
*/

#include<iostream>

using namespace std;

int main(){
	
	int x,y,z,a,b,c ;
	int dif ;
	
	cout<<"Digite la primera fecha " ;
	cout<<"\nIngrese el dia: " ; cin>> x ;
	cout<<"Ingrese el mes: " ; cin>> y;
	cout<<"Ingrese el año: " ; cin>> z ;

	cout<<"Digite la segunda fecha" ;
    cout<<"\nIngrese el dia: " ; cin>> a ;
	cout<<"Ingrese el mes: " ; cin>> b ;
	cout<<"Ingrese el año: " ; cin>> c  ;
	
	dif= ((x-a)*360)+ ((y-b)*30)+(z-c);
	cout<<"Los dias de difusion entre las fechas es " << dif  << endl ;
	
	return 0;
}


