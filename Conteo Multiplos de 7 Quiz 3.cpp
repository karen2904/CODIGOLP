/*EJERCICO QUIZ 3
Hacer un programa que calcule y muetsre la cantidad de numeros multiplos de 7 que hay entre 0 y un limite superior asinado por el usuario
*/

#include<iostream>
using namespace std;

int main(){
	int lim, num=0, cm=0, i; // lim es el limite que pone el usuario, cm es el contador de multiplos
	
	cout<<"Ingrese un numero maximo: "; cin>>lim;
	
	do{
    
	if(num%7==0){
		cm=cm+1;
	}
    num ++;
    } while(num<=lim);
    
    cout<<"La cantidad de multiplos de 7 en ese rango de numeros es " << cm << endl;
	
	return 0;
}
