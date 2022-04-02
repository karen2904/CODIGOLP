//EJERCICIO 12
/* Escriba un programa que permita leer una serie de números enteros entre -1.000 y 1.000. Con los números ingresados, calcular la suma de los números pares, el
producto de los impares, la potencia par de los impares, la suma de los negativos. El se ejecutará de dos formas: 1- la cantidad de veces que el usuario quiera, 2- que
el usuario seleccione un número de escape; en el momento que este número sea ingresado finalizará la ejecución y mostrará los resultados de las operaciones.*/
#include<iostream>
#include<locale.h>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int sums=0, pros=0, tnega=0, cant, p,otro,pote,respote,acum, cp;
	int num;
do{
	int i=1, sum=0, pro=1, nega=0;
	cout<<"\nIndique cuantos numeros tiene su serie: " ; cin>>cant;
	do{
		cout<<"\nDijite el numero " <<i<< ":" ; cin>>num;
		
		while((num<= -1000 )|| (num>1000)|| (num==1000)){
			cout<<"Ha sobrepasado el rango disponible. \n Intente de nuevo, Dijite el numero " <<i<< ":" ; cin>>num;
		}
		if(num%2==0){
			sum += num;//acumula la suma de pares
			sums += sum;//acumula la suma de cada serie
		}
		else{
			pro=pro*num;//acumula el promedio de impares
			pros += pro;//acumula cada serie
			p=1;//cuenta los ciclos de potencia
			cout<<"Ingrese la cantidad de potencias que quiere para el numero "<< num << " : "; cin>> cp;
		do{
			cout<<"\n Digite el exponente de la potencia: " ; cin>>pote;
			if(pote%2==0){
				respote=0;
				respote=pow(num,pote);
				acum=acum+respote;
				cout<<"El resultado de la potencia es " <<respote<<endl;
			}
			else{
				cout<<"Solo se calculará la potencia de pares" ;
			}
			p++;
			
		   }while(p<=cp);
		}
		
		if(num<0){
			nega+=num;//acumula los negativos
			tnega+=nega; //acumula todas las series de negativos
		}
		i++;
	}while(i<=cant); 
	//resultados de la serie
		cout<<"\n La suma de los pares es " << sum<<endl;
		cout<<"La suma de los negativos es " << nega <<endl;
		cout<<"El producto de los impares es " << pro<<endl;
        cout<<"\n Si desea realizar otra serie de numeros, digite 1: " ; cin>>otro;
}while(otro==1);
//dando resultado de todas las series
        cout<<"\n La suma de los pares de las series es " << sums<<endl;
		cout<<"La suma de los negativos de las series es " << tnega <<endl;
		cout<<"El producto de los impares de las series es " << pros<<endl;
		cout<<"El resultado de la potencia de las series es " <<acum<<endl;

}
