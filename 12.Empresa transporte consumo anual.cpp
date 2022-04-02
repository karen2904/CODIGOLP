/*Empresa de transporte que necesita estimar los costos anuales en pesos colombianos de su unico vehiculo teniendo en cuenta los promedios de consumo para
gasolina(semanal), llantas(anual), aceite(semestral), mantenimiento(trismestral)*/

#include<iostream>

using namespace std;

int main(){
	
	int gasolina, llantas, aceite, mantenimiento;
	int cstg,cstll,csta,cstm,csttotal;
	
	cout<<"\nIngrese el precio de la gasolina: " ; cin>>gasolina;
	cout<<"\nIngrese el precio de las llantas: " ; cin>>llantas;
	cout<<"\nIngrese el precio del aceite: " ; cin>>aceite;
	cout<<"\nIngrese el precio del mantenimiento: " ; cin>>mantenimiento;
	
	//operaciones
	cstg= gasolina*48 ; //48 es el numero de semanas anuales
	cstll=llantas ; //las llantas solo tienen un cambio anual
	csta= aceite * 2; //el aceite es semestral, dos veces al año
	csta= mantenimiento * 4; // el mantenimiento es 4 veces al año, cada tres meses
	csttotal= cstg+cstll+csta+cstm ; //se suma todo para un costo total
	
	//salida
	
	cout<<"El costo total del consumo anual del carro es " <<csttotal<<endl;
	return 0;
}
