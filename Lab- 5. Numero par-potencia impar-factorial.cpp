//EJERCICIO 5
/*Solicitar a una persona que digite un número entero, diga si es par o impar; de ser
par elévelo a la potencia 7 y si es impar calcule su factorial. */

#include<iostream>
#include<locale.h>
#include<cmath>
using namespace std;
int main(){
	int n, par, factorial= 1, otro; // se inicia el factorial en 1 para la multiplicacion iterativa, si es cero se anula la operación

do{	
	cout<<"\nIngrese un numero: " ; cin>>n;
	if(n%2==0){
		par= pow(n,7);
		cout<<"Numero Par" ;
		cout<<"\nEl resultado del  numero " << n << " es " << par << endl;
	}
	else{
		for(int i=1; i<=n;i++){
			factorial=factorial*i;
		}
		cout<<"Numero impar" ;
		cout<<"\nEl resultado del numero " << n << " es " << factorial << endl;
	}
	cout<<"\nSi desea ingresar otro numero, digite 1: " ; cin>> otro;
} while(otro==1);
}
