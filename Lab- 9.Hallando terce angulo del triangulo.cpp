//EJERCICIO 9
/* Si tenemos una serie de tri�ngulos rect�ngulos y nos dan el valor de uno de sus
�ngulos (no recto), �Cu�l es el valor del tercer �ngulo para cada uno de los
tri�ngulos? */
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int a1,a2,a3,sum, i=1, cant;
	a1= 90;
	cout<<"Digite la cantidad de triangulos rectangulos: " ; cin >>cant;
	
	do{
	cout<<endl;
	cout<<"Triangulo " << i ;
	cout<<"\nIngrese el valor del segundo angulo: " ; cin>> a2;
	while(a2>=90 || a2<=0){
		cout<<"No es posible, Intente de nuevo, Ingrese el valor del segundo angulo: " ; cin>> a2;
	}
	sum= a1+a2;
	a3=180-sum;
	cout<<"El tercer angulo es " <<a3 <<endl;
	i++	;
	} while(i<=cant);
}
